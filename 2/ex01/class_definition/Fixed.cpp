/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:40:10 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 15:32:57 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Fixed::Fixed(void)
{
	std::cout << "Fixed: creating object\n";
	this->_fixed_point_number = 0;
}

// Constructor
Fixed::Fixed(const int integer_value)
{
	std::cout << "Fixed: creating object (int)\n";
	this->_fixed_point_number = integer_value << Fixed::_fractional_bits;
}

// Constructor
Fixed::Fixed(const float floating_point_value)
{
	std::cout << "Fixed: creating object (float)\n";
	this->_fixed_point_number = roundf(floating_point_value * (1 << Fixed::_fractional_bits));
}

// Copy constructor
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Fixed: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Fixed& Fixed::operator = (const Fixed& other)
{
	std::cout << "Fixed: copying object (assignement)\n";
	if (this != &other)
		this->_fixed_point_number = other.getRawBits();
	return (*this);
}

// Setter
void Fixed::setRawBits(int const raw)
{
	//std::cout << "Fixed: setting values\n";
	this->_fixed_point_number = raw;
}

// Getter
int Fixed::getRawBits(void) const
{
	//std::cout << "Fixed: getting values\n";
	return (this->_fixed_point_number);
}

// Convert to floating-point
float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixed_point_number) / (1 << Fixed::_fractional_bits));
}

// Convert to integer
int Fixed::toInt(void) const
{
	return (this->_fixed_point_number >> Fixed::_fractional_bits);
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Fixed: destroying object\n";
}

// Overload output redirection operator for objects of the 'Fixed' class
std::ostream& operator << (std::ostream& output, const Fixed& fixed_object)
{
	output << fixed_object.toFloat();
	return (output);
}
