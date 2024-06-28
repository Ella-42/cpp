/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:25:05 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/29 00:36:35 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/* Includes */

#include <iostream> //input\output
#include <vector> //vector
#include <algorithm> //min\max_element, generate
#include <limits> //numeric_limits
#include <cstdlib> //abs, rand

// Custom class: Span
class Span
{
	public:
		// Constructor
		Span(unsigned int N);

		// Copy constructor
		Span(const Span& other);

		// Copy assignment operator overload
		Span& operator= (const Span& other);

		// Add given integer to vector
		void addNumber(int number);

		// Find shortest integer in vector
		unsigned int shortestSpan(void);

		// Find longest integer in vector
		unsigned int longestSpan(void);

		// Lazy? I generate for you :)
		void generate(void);

		// Destructor
		~Span(void);

	private:
		// Attributes
		unsigned int _size;
		std::vector<int> _int_vector;

		// No lambda :(
		static int _generate_random_number(void);
};
