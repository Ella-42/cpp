/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:06:17 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 22:26:06 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap: creating object\n";
	this->_name = "";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

// Constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: creating object (string)\n";
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap: copying object\n";
	*this = other;
}

// Copy assignment operator overload
FragTrap& FragTrap::operator = (const FragTrap& other)
{
	std::cout << "FragTrap: copying object (assignement)\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

// Literally high five's... ig...
void FragTrap::highFivesGuys(void)
{
	if (this->_hit_points < 1)
		return (std::cout << this->_name << " already perished\n", void());
	std::cout << this->_name << " high five'd you (do not ask me why, I do not know what's up with this guy...)\n";
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: destroying object\n";
}
