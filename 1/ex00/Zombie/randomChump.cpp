/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:13:24 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/21 13:25:46 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// Create a new zombie on the stack and announce itself
void randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
