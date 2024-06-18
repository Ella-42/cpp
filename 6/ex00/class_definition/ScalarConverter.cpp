/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:17:58 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/18 23:02:53 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class header
#include "../class/ScalarConverter.hpp"

// Identify incoming type and convert and print in char, int, float and double form
void ScalarConverter::convert(const std::string& input)
{
	ScalarTypes types;
	short type = ScalarConverter::identify(input, types);

	if (!type)
		std::cerr << "Invalid type.\n";

	else if (type == PSEUDO)
		ScalarConverter::print(input);

	else
		ScalarConverter::print(input, type, types);
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

// Identify incoming type
short ScalarConverter::identify(const std::string& input, ScalarTypes& types)
{
	if (input == "-inf" || input == "+inf" || input == "nan"
	|| input == "-inff" || input == "+inff" || input == "nanf")
		return (PSEUDO);

	if (input.length() == 1 && !std::isdigit(input[0]))
		return (types.c = input[0], CHAR);

	std::stringstream string_stream(input);

	int i;
	if (string_stream >> i && string_stream.eof())
		return (types.i = i, INT);

	string_stream.clear();
	string_stream.str(input);

	double d;
	if (string_stream >> d && string_stream.eof())
		return (types.d = d, DOUBLE);

	if (input[input.length() - 1] == 'f')
	{
		std::string non_const = input;
		non_const.resize(non_const.length() - 1);

		string_stream.clear();
		string_stream.str(non_const);

		float f;
		if (string_stream >> f && string_stream.eof())
			return (types.f = f, FLOAT);
	}

	return (INVALID);
}

// Master printer
void ScalarConverter::print(const std::string& input, const short& type, ScalarTypes& types)
{
	std::stringstream string_stream(input);
	long double overflow;
	string_stream >> overflow;

	std::cout << std::fixed << std::setprecision(1);

	if (type == CHAR)
	{
		ScalarConverter::print(overflow, types.c);
		ScalarConverter::print(overflow, static_cast<int>(types.c));
		ScalarConverter::print(overflow, static_cast<float>(types.c));
		ScalarConverter::print(overflow, static_cast<double>(types.c));
	}

	else if (type == INT)
	{
		ScalarConverter::print(overflow, static_cast<char>(types.i));
		ScalarConverter::print(overflow, types.i);
		ScalarConverter::print(overflow, static_cast<float>(types.i));
		ScalarConverter::print(overflow, static_cast<double>(types.i));
	}

	else if (type == FLOAT)
	{
		ScalarConverter::print(overflow, static_cast<char>(types.f));
		ScalarConverter::print(overflow, static_cast<int>(types.f));
		ScalarConverter::print(overflow, types.f);
		ScalarConverter::print(overflow, static_cast<double>(types.f));
	}

	else if (type == DOUBLE)
	{
		ScalarConverter::print(overflow, static_cast<char>(types.d));
		ScalarConverter::print(overflow, static_cast<int>(types.d));
		ScalarConverter::print(overflow, static_cast<float>(types.d));
		ScalarConverter::print(overflow, types.d);
	}
}

// Print pseudos
void ScalarConverter::print(const std::string& input)
{
	std::cout << "char: N/A\ndouble: N/A\n";

	if (input == "nanf" || input == "nan")
		std::cout << "float: nanf\ndouble: nan\n";

	else if (input == "-inff" || input == "-inf")
		std::cout << "float: -inff\ndouble: -inf\n";

	else if (input == "+inff" || input == "+inf")
		std::cout << "float: +inff\ndouble: +inf\n";
}

// Print characters
void ScalarConverter::print(const long double& overflow, const char& c)
{
	if (std::numeric_limits<char>::min() > overflow || overflow > std::numeric_limits<char>::max())
		return (std::cout << "char: overflow\n", void());

	if (!std::isprint(c))
		return (std::cout << "char: Non displayable\n", void());

	std::cout << "char: '" << c << "'\n";
}

// Print integers
void ScalarConverter::print(const long double& overflow, const int& i)
{
	if (std::numeric_limits<int>::min() > overflow || overflow > std::numeric_limits<int>::max())
		return (std::cout << "int: overflow\n", void());

	std::cout << "int: " << i << '\n';
}

// Print floats
void ScalarConverter::print(const long double& overflow, const float& f)
{
	if (-std::numeric_limits<float>::max() > overflow || overflow > std::numeric_limits<float>::max())
		return (std::cout << "float: overflow\n", void());

	std::cout << "float: " << f << "f\n";
}

// Print doubles
void ScalarConverter::print(const long double& overflow, const double& d)
{
	if (-std::numeric_limits<double>::max() > overflow || overflow > std::numeric_limits<double>::max())
		return (std::cout << "double: overflow\n", void());

	std::cout << "double: " << d << '\n';
}

// Destructor
ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter: destroying object\n";
}
