/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:53:45 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/06 17:54:45 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// Set name of zombie
void	Zombie::set_zombie_name(std::string name)
{
	this->name = name;
}

// Zombie announces itself
void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

// Destructor
Zombie::~Zombie(void)
{
	std::cout << this->name << " was laid to rest...\n";
}
