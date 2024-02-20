/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:41:05 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/20 20:11:15 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.h"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1)
		throw std::out_of_range("Error: invalid zombie horde size");
	Zombie* zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].set_zombie_name(name);
	return (zombie);
}
