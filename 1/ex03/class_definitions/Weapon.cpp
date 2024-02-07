/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:40:54 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/07 16:55:48 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Weapon::Weapon(void)
{
	std::cout << "created object: Weapon\n";
}

// Setter
void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

// Getter
const std::string& Weapon::getType(void)
{
	return (this->type);
}

// Destructor
Weapon::~Weapon(void)
{
	std::cout << "destroyed object: Weapon\n";
}
