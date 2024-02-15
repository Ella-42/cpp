/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:08:25 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/15 22:22:54 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Cat::Cat(void) : Animal()
{
	std::cout << "Cat: creating object\n";
	this->type = "Cat";
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Cat& Cat::operator = (const Cat& other)
{
	std::cout << "Cat: copying object (assignement)\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Make cat sounds
void Cat::makeSound(void) const
{
	std::cout << "*meow*\n";
}

// Destructor
Cat::~Cat(void)
{
	std::cout << "Cat: destroying object\n";
}
