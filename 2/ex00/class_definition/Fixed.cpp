/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:40:10 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/12 21:07:12 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Fixed::Fixed(void)
{
	std::cout << "Fixed: creating object\n";
	this->_fixed_point_number = 0;
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

