/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:51:27 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/07 18:14:06 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	std::cout << "created object: HumanB\n";
}

// Setter
void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

// Attack
void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << '\n';
	else
		std::cout << this->name << " attacks with their bare fists\n";
}

// Destructor
HumanB::~HumanB(void)
{
	std::cout << "destroyed object: HumanB\n";
}
