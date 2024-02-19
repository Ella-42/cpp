/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:56:03 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 23:23:01 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Character::Character(std::string name) : ICharacter()
{
	std::cout << "Character: creating object\n";
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL; 
}

// Copy constructor
Character::Character(const Character& other) : ICharacter(other)
{
	std::cout << "Character: copying object\n";
	this->_name += "_copied";
	for (int i = 0; i < 4; i++)
		if (other._inventory[i])
			this->_inventory[i] = (other._inventory[i])->clone();
}

// Copy assignment operator overload
Character& Character::operator = (const Character& other)
{
	std::cout << "Character: copying object (assignement)\n";
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = (other._inventory[i])->clone();
		}
	}
	return (*this);
}

// Getter
std::string const& Character::getName(void) const
{
	return (this->_name);
}

// Equip
void Character::equip(AMateria* materia)
{
	int i = 0;
	while (this->_inventory[i] && i < 4)
		i++;
	if (!materia || i > 3)
		return (void());
	this->_inventory[i] = materia;
}

// Unequip
void Character::unequip(int idx)
{
	if (3 < idx || idx < 0 || !this->_inventory[idx])
		return (void());
	this->_inventory[idx] = NULL;
}

// Using
void Character::use(int idx, ICharacter& target)
{
	if (3 < idx || idx < 0 || !this->_inventory[idx])
		return (void());
	(this->_inventory[idx])->use(target);
}

// Destructor
Character::~Character(void)
{
	std::cout << "Character: destroying object\n";
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i]; 
}

// To avoid memory leaks
AMateria* Character::getMateriaFromInventory(int idx)
{
	return (this->_inventory[idx]);
}
