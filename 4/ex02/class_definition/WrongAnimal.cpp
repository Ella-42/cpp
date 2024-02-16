/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:13:04 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/15 22:24:03 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal: creating object\n";
	this->type = "strange";
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal: copying object\n";
	*this = other;
}

// Copy assignment operator overload
WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other)
{
	std::cout << "WrongAnimal: copying object (assignement)\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Getter
std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

// Default sound
void WrongAnimal::makeSound(void) const
{
	std::cout << "*strange silence*\n";
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: destroying object\n";
}
