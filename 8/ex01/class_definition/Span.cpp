/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:24:43 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/10 22:52:42 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class header
#include "../class/Span.hpp"

// Constructor
Span::Span(unsigned int N):
_size(N)
{
	std::cout << "Span: creating object\n";
}

// Copy constructor
Span::Span(const Span& other):
_size(other._size)
{
	std::cout << "Span: copying object\n";
}

// Copy assignment operator overload
Span& Span::operator= (const Span& other)
{
	std::cout << "Span: copying object (assignement)\n";

	if (this != &other)
		this->_size = other._size;

	return (*this);
}

// Add given number to vector
void Span::addNumber(int number)
{
	if (this->_int_vector.size() == this->_size)
		throw (std::runtime_error("Error: Out of memory"));

	this->_int_vector.push_back(number);
}

// Find shortest span between integers in vector
unsigned int Span::shortestSpan(void)
{
	if (this->_int_vector.size() < 2)
		throw (std::runtime_error("Error: Insufficient elements"));

	std::vector<int> int_array_copy = this->_int_vector;

	std::sort(int_array_copy.begin(), int_array_copy.end());

	unsigned int shortest = std::numeric_limits<unsigned int>::max();

	for (unsigned int i = 1; i < int_array_copy.size(); i++)
		if (shortest > std::abs(static_cast<long>(int_array_copy[i]) - static_cast<long>(int_array_copy[i - 1])))
			shortest = std::abs(static_cast<long>(int_array_copy[i]) - static_cast<long>(int_array_copy[i - 1]));

	return (shortest);
}

// Find longest span between integers in vector
unsigned int Span::longestSpan(void)
{
	if (this->_int_vector.size() < 2)
		throw (std::runtime_error("Error: Insufficient elements"));

	int min = *(std::min_element(this->_int_vector.begin(), this->_int_vector.end()));
	int max = *(std::max_element(this->_int_vector.begin(), this->_int_vector.end()));

	return (std::abs(static_cast<long>(max) - static_cast<long>(min)));
}

// No lambda :(
int Span::_generate_random_number(void)
{
	return (std::rand() % std::numeric_limits<int>::max());
}

// Lazy? I generate for you :)
void Span::generate(void)
{
	this->_int_vector.resize(this->_size);

	std::generate(this->_int_vector.begin(), this->_int_vector.end(), this->_generate_random_number);
}

// Destructor
Span::~Span(void)
{
	std::cout << "Span: destroying object\n";
}
