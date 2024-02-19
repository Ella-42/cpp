/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:55:46 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 22:52:04 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Ice::Ice(void) : AMateria()
{
	std::cout << "Ice: creating object\n";
	this->type = "ice";
}

// Copy constructor
Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Ice: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Ice& Ice::operator = (const Ice& other)
{
	std::cout << "Ice: copying object (assignement)\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Cloning
AMateria* Ice::clone(void) const
{
	return (new Ice());
}

// Use materia
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

// Destructor
Ice::~Ice(void)
{
	std::cout << "Ice: destroying object\n";
}
