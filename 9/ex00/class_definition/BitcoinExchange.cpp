/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:10:18 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/11 14:41:40 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class header
#include "../class/BitcoinExchange.hpp"

// Constructor
BitcoinExchange::BitcoinExchange(std::ifstream& input_data):
_input_data(input_data)
{
	std::cout << "BitcoinExchange: creating object\n";

	this->initialize_database();

	this->parse_input();
}

// Copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other):
_internal_data(other._internal_data), _input_data(other._input_data)
{
	std::cout << "BitcoinExchange: copying object\n";
}

// Copy assignment operator overload
BitcoinExchange& BitcoinExchange::operator= (const BitcoinExchange& other)
{
	std::cout << "BitcoinExchange: copying object (assignement)\n";

	if (this != &other)
		this->_internal_data = other._internal_data;

	return (*this);
}

// Print out the values of the map
void BitcoinExchange::print_internal_data(void) const
{
	for (std::map<std::string, float>::const_iterator iterator = this->_internal_data.begin(); iterator != this->_internal_data.end(); ++iterator)
		std::cout << "Date: " << std::setprecision(15) << iterator->first << " - Value: " << iterator->second << '\n';
}

// Initialize the internal database
void BitcoinExchange::initialize_database(void)
{
	try
	{
		std::ifstream internal_data;
		open_file("data/Bitcoin_value.csv", internal_data);

		std::getline(internal_data, this->_current_line);
	
		while (std::getline(internal_data, this->_current_line))
			this->_internal_data[this->_current_line.substr(0, 10)] = atof(this->_current_line.substr(11).c_str());

		internal_data.close();
	}

	catch (const std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}
}

// Parse input file, get value and print the result
void BitcoinExchange::parse_input(void)
{
	this->_line_number = 0;
	while (std::getline(this->_input_data, this->_current_line))
	{
		this->_line_number++;

		if (!validate_input())
			continue ;

		this->get_value();
	}

}

// Parse input file, making sure it follows correct formatting
bool BitcoinExchange::validate_input(void)
{
	if (this->_current_line.empty() || (this->_line_number == 1 && this->_current_line == "date | value"))
		return (0);

	size_t delimeter = this->_current_line.find(" | ");
	if (delimeter == std::string::npos)
	{
		std::cerr << "Invalid format: " << this->_current_line << '\n';
		return (0);
	}

	this->_input_date = this->_current_line.substr(0, delimeter);

	std::tm date = {};
	this->_date = date;
	if (!strptime(this->_input_date.c_str(), "%Y-%m-%d", &this->_date))
	{
		std::cerr << "Invalid date: " << this->_input_date << '\n';
		return (0);
	}

	std::tm first_date = {};
	std::tm last_date = {};
	strptime("2009-01-02", "%Y-%m-%d", &first_date);
	strptime("2022-03-29", "%Y-%m-%d", &last_date);

	if (std::mktime(&first_date) > std::mktime(&this->_date) || std::mktime(&this->_date) > std::mktime(&last_date))
	{
		std::cerr << "Date not in database: " << this->_input_date << '\n';
		return (0);
	}

	std::stringstream string_stream(this->_current_line.substr(delimeter + 3));
	string_stream >> this->_value;

	if (string_stream.fail() || !string_stream.eof()
	|| 0 > this->_value || this->_value > 1000)
	{
		std::cerr << "Invalid value: " << string_stream.str() << '\n';
		return (0);
	}

	return (1);
}

// Calculate the value of the nearest lower date
void BitcoinExchange::get_value(void)
{
	bool modified_date = false;

	if (this->_internal_data.find(this->_input_date) == this->_internal_data.end())
	{
		modified_date = true;

		for (std::map<std::string, float>::const_iterator iterator = this->_internal_data.begin(); iterator != this->_internal_data.end(); ++iterator)
		{
			std::tm internal_date = {};
			strptime(iterator->first.c_str(), "%Y-%m-%d", &internal_date);

			if (!(std::mktime(&internal_date) < std::mktime(&this->_date)))
				break ;

			this->_input_date = iterator->first;
		}
	}

	std::cout << this->_input_date << " | " << this->_value << " = " << this->_value * this->_internal_data[this->_input_date] << '\n';

	if (modified_date)
		std::cout << "^ Info: closest date\n";

}

// Destructor
BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange: destroying object\n";
}
