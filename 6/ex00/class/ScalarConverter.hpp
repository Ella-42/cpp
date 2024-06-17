/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:21:09 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/17 22:50:57 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

/* Includes */

# include <iostream> //input\output
# include <string> //string
# include <cctype> //isprint, isdigit
# include <sstream> //stringsteam

// Enumeration for the scalar types
enum ScalarTypeIdentifiers
{
	INVALID,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO
};

// Custom class: ScalarConverter
class	ScalarConverter
{
	public:
		// Identify incoming type and convert and print in char, int, float and double form
		static void convert(const std::string& input);

	private:
		// Constructor
		ScalarConverter(void);

		// Copy constructor
		ScalarConverter(const ScalarConverter& other);

		// Copy assignment operator overload
		ScalarConverter& operator= (const ScalarConverter& other);

		// Identify incoming type
		static short identify(const std::string& input);

		// Destructor
		~ScalarConverter(void);
};

#endif
