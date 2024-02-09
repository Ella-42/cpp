/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:13:06 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/09 19:26:13 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Fixed::Fixed(void)
{
	std::cout << "created object: Fixed\n";
	;
}

// Copy constructor
Fixed::Fixed(const Fixed& other)
{
	*this = other;
	std::cout << "copied object\n";
}

// Copy assignment operator overload
Fixed& Fixed::operator = (const Fixed& other)
{
	if (this != &other)
		this->_fixed_point_number = other._fixed_point_number;
	std::cout << "copied object(via assignment)\n";
	return *this;
}

// Setter
void Fixed::setRawBits(int const raw)
{
	;
}

// Getter
int Fixed::getRawBits(void) const
{
	return (0);
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "destroyed object: Fixed\n";
}
