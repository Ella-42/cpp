/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:56:03 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/17 00:30:54 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Character::Character(std::string name) : ICharacter()
{
	std::cout << "Character: creating object\n";
	this->_name = name;
	this->_index = 0;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL; 
}

// Copy constructor
Character::Character(const Character& other) : ICharacter(other)
{
	std::cout << "Character: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Character& Character::operator = (const Character& other)
{
	std::cout << "Character: copying object (assignement)\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_index = other._index;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i];
	}
	return (*this);
}

// Getter
std::string const& Character::getName(void) const
{
	return (this->_name);
}

// Equip
void Character::equip(AMateria* m) const
{}

// Unequip
void Character::unequip(int idx)
{}

// Using
void Character::use(int idx, ICharacter& target)
{}

// Destructor
Character::~Character(void)
{
	std::cout << "Character: destroying object\n";
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i]; 
}
