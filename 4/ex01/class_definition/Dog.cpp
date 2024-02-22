/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:05:42 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/22 20:12:37 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Dog::Dog(void) : Animal()
{
	std::cout << "Dog: creating object\n";
	this->type = "Dog";
	this->_brain = new Brain();
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog: copying object\n";
	this->_brain = new Brain();
	*this = other;
}

// Copy assignment operator overload
Dog& Dog::operator = (const Dog& other)
{
	std::cout << "Dog: copying object (assignement)\n";
	if (this != &other)
	{
		this->type = other.type;
		*(this->_brain) = *(other._brain);
	}
	return (*this);
}

// Make dog sounds
void Dog::makeSound(void) const
{
	std::cout << "*woof woof*\n";
}

// Setter
void Dog::setIdea(std::string idea, int i)
{
	if (i > 100)
		return (std::cerr << "Error: access violation\n", void());
	this->_brain->setThought(idea, i);
}

// Getter
std::string Dog::getIdea(int i) const
{
	if (i > 100)
		return (std::cerr << "Error: access violation\n", "");
	return (*(this->_brain->getThought(i)));
}

// Getter
Brain* Dog::getBrainAddress(void) const
{
	return (this->_brain);
}

// Destructor
Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog: destroying object\n";
}
