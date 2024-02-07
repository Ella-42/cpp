/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:51:08 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/07 18:13:36 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
HumanA::HumanA(std::string name, Weapon& weapon_type) : name(name), weapon(&weapon_type)
{
	std::cout << "created object: HumanA\n";
}

// Attack
void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << '\n';
}

// Destructor
HumanA::~HumanA(void)
{
	std::cout << "destroyed object: HumanA\n";
}
