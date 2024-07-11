/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:13:34 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/11 14:45:59 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// Includes and function references
#include "main.hpp"

/* Includes */

#include <iostream> //input\output, defaultfloat
#include <map> //map
#include <string> //string, getline
#include <fstream> //ifstream
#include <iterator> //iterator
#include <cstddef> //size_t
#include <cstdlib> //atof
#include <iomanip> //setprecision
#include <ctime> //tm, strptime, mktime
#include <sstream> //stringstream

// Custom class: BitcoinExchange
class BitcoinExchange
{
	public:
		// Constructor
		BitcoinExchange(std::ifstream& input_data);

		// Copy constructor
		BitcoinExchange(const BitcoinExchange& other);

		// Copy assignment operator overload
		BitcoinExchange& operator= (const BitcoinExchange& other);

		// Print out the values of the map
		void print_internal_data(void) const;

		// Destructor
		~BitcoinExchange(void);

	private:
		// Attributes
		std::map<std::string, float> _internal_data; //database
		std::ifstream& _input_data; //input data file
		size_t _line_number; //number of line being parsed
		std::string _current_line; //line being parsed
		std::string _input_date; //date of current line
		std::tm _date; //date of current line in a workable structure
		float _value; //value of current line

		// Initialize the internal database
		void initialize_database(void);

		// Parse input file, get value and print the result
		void parse_input(void);

		// Validate input file, making sure it follows correct formatting
		bool validate_input(void);

		// Calculate the value of the nearest lower date
		void get_value(void);
};
