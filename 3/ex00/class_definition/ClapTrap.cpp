/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:24:04 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 20:01:54 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap: creating object\n";
	this->_name = "";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

// Constructor
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap: creating object\n";
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap: copying object\n";
	*this = other;
}

// Copy assignment operator overload
ClapTrap& ClapTrap::operator = (const ClapTrap& other)
{
	std::cout << "ClapTrap: copying object (assignement)\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

// Attack
void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points < 1)
		return (std::cout << this->_name << " already perished\n"), void();
	if (this->_energy_points < 1)
		return (std::cout << this->_name << " has no energy left...\n"), void();
	std::cout << this->_name << " attacks " << target << '\n';
	this->_energy_points -= 1;
}

// Take damage
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 1)
		return (std::cout << this->_name << " already perished\n"), void();
	std::cout << this->_name << " takes " << amount << " hit points of damage\n";
	this->_hit_points -= amount;
	if (this->_hit_points < 1)
		std::cout << this->_name << " perished\n";
	else
		std::cout << this->_name << " now has " << this->_hit_points << " hit points left...\n";
}

// Heal
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points < 1)
		return (std::cout << this->_name << " already perished\n"), void();
	if (this->_energy_points < 1)
		return (std::cout << this->_name << " has no energy left...\n"), void();
	std::cout << this->_name << " repaired itself from " << this->_hit_points;
	this->_hit_points += amount;
	this->_energy_points -= 1;
	std::cout << " to " << this->_hit_points << " hit points\n";
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: destroying object\n";
}
