/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:21:09 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/18 23:18:40 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

/* Includes */

# include <iostream> //input\output
# include <string> //string
# include <cctype> //isprint, isdigit
# include <sstream> //stringsteam
# include <limits> //min and max values for types
# include <iomanip> //setprecision

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

// Union for the scalar types
union ScalarTypes
{
	char	c;
	int		i;
	float	f;
	double	d;
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
		static short identify(const std::string& input, ScalarTypes& types);

		// Master printer
		static void print(const std::string& input, const long double& value);

		// Print pseudos
		static void print(const std::string& input);

		// Print characters
		static void print(const long double& overflow, const char& c);

		// Print integers
		static void print(const long double& overflow, const int& i);

		// Print floats
		static void print(const long double& overflow, const float& f);

		// Print doubles
		static void print(const long double& overflow, const double& d);

		// Destructor
		~ScalarConverter(void);
};

#endif
