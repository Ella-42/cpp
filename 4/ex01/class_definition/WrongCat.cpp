/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:11:10 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/15 22:22:22 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat: creating object\n";
	this->type = "strange cat";
}

// Copy constructor
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat: copying object\n";
	*this = other;
}

// Copy assignment operator overload
WrongCat& WrongCat::operator = (const WrongCat& other)
{
	std::cout << "WrongCat: copying object (assignement)\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Make cat sounds
void WrongCat::makeSound(void) const
{
	std::cout << "*strange meows*\n";
}

// Destructor
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: destroying object\n";
}
