/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:14:46 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/12 18:32:32 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class header
#include "../class/RPN.hpp"

// Constructor
RPN::RPN(const std::string& input):
_equation(input)
{
	std::cout << "RPN: creating object\n";

	this->_validate();

	this->_calculate();
}

// Copy constructor
RPN::RPN(const RPN& other):
_equation(other._equation)
{
	std::cout << "RPN: copying object\n";
}

// Copy assignment operator overload
RPN& RPN::operator= (const RPN& other)
{
	std::cout << "RPN: copying object (assignement)\n";

	(void)other;

	return (*this);
}

// Print out the result of the mathematical equation
void RPN::print_result(void)
{
	std::cout << "Result: " << this->_result << '\n';
}

// Validate if equation is correctly noted
void RPN::_validate(void)
{
	for (size_t i = 0; i < this->_equation.length(); i++)
		for (char c = this->_equation[i]; !isdigit(c) && c != ' ' && c != '+' && c != '-' && c != '*' && c != '/';)
			throw (std::invalid_argument("Invalid notation"));
}

// Validate if equation is correctly noted
void RPN::_calculate(void)
{
	for (size_t i = 0; i < this->_equation.length(); i++)
	{
		char c = this->_equation[i];

		if (isdigit(c))
			this->_stack.push(c - '0');

		else if (c != ' ')
		{
			if (this->_stack.size() < 2)
				throw (std::invalid_argument("Invalid notation"));

			float right = this->_stack.top();
			this->_stack.pop();

			if (c == '+')
				this->_stack.top() += right;
			else if (c == '-')
				this->_stack.top() -= right;
			else if (c == '*')
				this->_stack.top() *= right;
			else if (c == '/' && right != 0)
				this->_stack.top() /= right;
			else
				throw (std::invalid_argument("Division by zero"));
		}
	}

	if (this->_stack.size() != 1)
		throw (std::invalid_argument("Invalid notation"));

	this->_result = this->_stack.top();
}

// Destructor
RPN::~RPN(void)
{
	std::cout << "RPN: destroying object\n";
}
