/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:13:24 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/21 11:49:00 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// Create a new zombie on the heap and announce itself
void randomChump(std::string name)
{
	Zombie* zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}
