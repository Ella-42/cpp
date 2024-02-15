/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:05:18 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/15 20:46:40 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Animal::Animal(void)
{
	std::cout << "Animal: creating object\n";
	this->type = "typeless";
}

// Copy constructor
Animal::Animal(const Animal& other)
{
	std::cout << "Animal: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Animal& Animal::operator = (const Animal& other)
{
	std::cout << "Animal: copying object (assignement)\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Getter
std::string Animal::getType(void) const
{
	return (this->type);
}

// Default sound
void Animal::makeSound(void) const
{
	std::cout << "*silence*\n";
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "Animal: destroying object\n";
}
