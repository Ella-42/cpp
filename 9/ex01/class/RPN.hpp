/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:14:56 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/12 18:36:33 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/* Includes */

#include <iostream> //input\output
#include <stack> //stack
#include <stdexcept> //invalid_argument
#include <string> //string
#include <cctype> //isdigit

// Custom class: RPN
class RPN
{
	public:
		// Constructor
		RPN(const std::string& input);

		// Copy constructor
		RPN(const RPN& other);

		// Copy assignment operator overload
		RPN& operator= (const RPN& other);

		// Print out the result of the mathematical equation
		void print_result(void);

		// Destructor
		~RPN(void);

	private:
		// Attributes
		std::stack<float> _stack; //stack used for the calculation of the mathematical equation
		const std::string& _equation; //mathematical equation in reverse Polish notation
		float _result; //result of the mathematical equation

		// Validate if equation is correctly noted
		void _validate(void);

		// Calculate mathematical equation
		void _calculate(void);
};
