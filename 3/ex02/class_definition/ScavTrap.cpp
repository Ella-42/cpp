/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:39:17 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/21 21:54:00 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap: creating object\n";
	this->_name = "";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_gate_keeper_mode = false;
}

// Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: creating object (string)\n";
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_gate_keeper_mode = false;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap: copying object\n";
	*this = other;
}

// Copy assignment operator overload
ScavTrap& ScavTrap::operator = (const ScavTrap& other)
{
	std::cout << "ScavTrap: copying object (assignement)\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
		this->_gate_keeper_mode = other._gate_keeper_mode;
	}
	return (*this);
}

// Attack
void ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points < 1)
		return (std::cout << this->_name << " already perished\n", void());
	if (this->_energy_points < 1)
		return (std::cout << this->_name << " has no energy left...\n", void());
	std::cout << this->_name << " bashes on " << target << '\n';
	this->_energy_points -= 1;
}

// Turn on gate keeper mode
void ScavTrap::guardGate(void)
{
	if (this->_hit_points < 1)
		return (std::cout << this->_name << " already perished\n", void());
	if (this->_gate_keeper_mode == true)
		return (std::cout << this->_name << " already in gate keeper mode\n", void());
	this->_gate_keeper_mode = true;
	std::cout << this->_name << " activated gate keeper mode\n";
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: destroying object\n";
}
