/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:05:42 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 16:10:30 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Dog::Dog(void) : Animal()
{
	std::cout << "Dog: creating object\n";
	this->type = "Dog";
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Dog& Dog::operator = (const Dog& other)
{
	std::cout << "Dog: copying object (assignement)\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Make dog sounds
void Dog::makeSound(void) const
{
	std::cout << "*woof woof*\n";
}

// Destructor
Dog::~Dog(void)
{
	std::cout << "Dog: destroying object\n";
}
