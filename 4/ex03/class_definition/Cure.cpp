/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:56:05 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 22:10:02 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Cure::Cure(void) : AMateria()
{
	std::cout << "Cure: creating object\n";
	this->type = "cure";
}

// Copy constructor
Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "Cure: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Cure& Cure::operator = (const Cure& other)
{
	std::cout << "Cure: copying object (assignement)\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Cloning
AMateria* Cure::clone(void) const
{
	return (new Cure());
}

// Use materia
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

// Destructor
Cure::~Cure(void)
{
	std::cout << "Cure: destroying object\n";
}
