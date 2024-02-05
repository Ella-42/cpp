/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:53:45 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/05 20:22:14 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// Constructor
Zombie::Zombie(std::string name)
{
	this->name = name;
}

// Zombie announces itself
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

// Destructor
Zombie::~Zombie(void)
{
	std::cout << name << " was laid to rest...\n";
}
