/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:17:58 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/17 23:02:00 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class header
#include "../class/ScalarConverter.hpp"

// Identify incoming type
short ScalarConverter::identify(const std::string& input)
{
	if (input == "-inf" || input == "+inf" || input == "nan"
	|| input == "-inff" || input == "+inff" || input == "nanf")
		return (PSEUDO);

	if (input.length() == 1 && !std::isdigit(input[0]) && std::isprint(input[0]))
		return (CHAR);

	std::stringstream string_stream(input);

	int i;
	if (string_stream >> i && string_stream.eof())
		return (INT);

	std::string non_const = input;

	bool potential_float = false;
	if (non_const[non_const.length() - 1] == 'f')
	{
		potential_float = true;
		non_const.resize(non_const.length() - 1);
	}

	string_stream.clear();
	string_stream.str(non_const);

	double d;
	if (string_stream >> d && string_stream.eof())
	{
		if (potential_float)
			return (FLOAT);
		return (DOUBLE);
	}

	return (INVALID);
}

// Identify incoming type and convert and print in char, int, float and double form
void ScalarConverter::convert(const std::string& input)
{
	short type = ScalarConverter::identify(input);

	if (!type)
		return (std::cerr << "Invalid type.\n", void());

	else if (type == PSEUDO)
		std::cout << "Type identified as pseudo.\n";

	else if (type == CHAR)
		std::cout << "Type identified as char.\n";

	else if (type == INT)
		std::cout << "Type identified as int.\n";

	else if (type == FLOAT)
		std::cout << "Type identified as float.\n";

	else if (type == DOUBLE)
		std::cout << "Type identified as double.\n";
}

// Constructor
ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter: creating object\n";
}

// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	std::cout << "ScalarConverter: copying object\n";

	(void)other;
}

// Copy assignment operator overload
ScalarConverter& ScalarConverter::operator= (const ScalarConverter& other)
{
	std::cout << "ScalarConverter: copying object (assignement)\n";

	(void)other;

	return (*this);
}

// Destructor
ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter: destroying object\n";
}
