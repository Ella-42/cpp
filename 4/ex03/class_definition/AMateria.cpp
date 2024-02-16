/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:34:27 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 22:59:02 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
AMateria::AMateria(void)
{
	std::cout << "AMateria: creating object\n";
	this->type = "typeless";
}

// Constructor
AMateria::AMateria(std::string const& type)
{
	std::cout << "AMateria: creating object\n";
	this->type = type;
}

// Copy constructor
AMateria::AMateria(const AMateria& other)
{
	std::cout << "AMateria: copying object\n";
	*this = other;
}

// Copy assignment operator overload
AMateria& AMateria::operator = (const AMateria& other)
{
	std::cout << "AMateria: copying object (assignement)\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Getter
std::string const& AMateria::getType(void) const
{
	return (this->type);
}

// Use materia
void AMateria::use(ICharacter& target)
{
	std::cout << "* " << target.getName() << " just stares at you *\n";
}

// Destructor
AMateria::~AMateria(void)
{
	std::cout << "AMateria: destroying object\n";
}
