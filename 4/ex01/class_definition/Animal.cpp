/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:05:18 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 17:21:39 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Animal::Animal(void)
{
	std::cout << "Animal: creating object\n";
	this->type = "typeless";
	this->_brain = new Brain();
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
	{
		this->type = other.getType();
		this->_brain = new Brain();
		*(this->_brain) = *(other._brain);
	}
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

// Return address
const std::string* Animal::getBrainAddress(int i) const
{
	return (this->_brain->getThought(i));
}

// Setter
void Animal::setIdea(std::string idea, int i)
{
	if (i > 100)
		return (std::cerr << "Error: access violation\n", void());
	this->_brain->setThought(idea, i);
}

// Getter
std::string Animal::getIdea(int i) const
{
	if (i > 100)
		return (std::cerr << "Error: access violation\n", "");
	return (*(this->_brain->getThought(i)));
}

Animal::~Animal(void)
{
	std::cout << "Animal: destroying object\n";
	delete this->_brain;
}
