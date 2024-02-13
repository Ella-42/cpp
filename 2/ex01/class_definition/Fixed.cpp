/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:40:10 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 00:30:24 by lpeeters         ###   ########.fr       */
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
Fixed::Fixed(const int value)
{
	std::cout << "Fixed: creating object (int)\n";
}

// Constructor
Fixed::Fixed(const float value)
{
	std::cout << "Fixed: creating object (float)\n";
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
	std::cout << "Fixed: setting values\n";
	this->_fixed_point_number = raw;
}

// Getter
int Fixed::getRawBits(void) const
{
	std::cout << "Fixed: getting values\n";
	return (this->_fixed_point_number);
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Fixed: destroying object\n";
}
