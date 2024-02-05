/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:13:24 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/05 20:12:24 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// Create a new zombie on the heap and announce itself
Zombie* randomChump(std::string name)
{
	Zombie* zombie = newZombie(name);
	zombie->announce();
	return (zombie);
}
