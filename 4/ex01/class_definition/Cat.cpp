/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:08:25 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/22 20:12:49 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Cat::Cat(void) : Animal()
{
	std::cout << "Cat: creating object\n";
	this->type = "Cat";
	this->_brain = new Brain();
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat: copying object\n";
	this->_brain = new Brain();
	*this = other;
}

// Copy assignment operator overload
Cat& Cat::operator = (const Cat& other)
{
	std::cout << "Cat: copying object (assignement)\n";
	if (this != &other)
	{
		this->type = other.type;
		if (other._brain)
			delete other._brain;
		this->_brain = new Brain();
		*(this->_brain) = *(other._brain);
	}
	return (*this);
}

// Make cat sounds
void Cat::makeSound(void) const
{
	std::cout << "*meow*\n";
}

// Setter
void Cat::setIdea(std::string idea, int i)
{
	if (i > 100)
		return (std::cerr << "Error: access violation\n", void());
	this->_brain->setThought(idea, i);
}

// Getter
std::string Cat::getIdea(int i) const
{
	if (i > 100)
		return (std::cerr << "Error: access violation\n", "");
	return (*(this->_brain->getThought(i)));
}

// Getter
Brain* Cat::getBrainAddress(void) const
{
	return (this->_brain);
}

// Destructor
Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat: destroying object\n";
}
