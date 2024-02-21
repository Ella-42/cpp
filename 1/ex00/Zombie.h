/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:20:48 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/21 13:26:02 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

/* inlcudes */

// Standard libraries
# include <iostream> //cin, cout
# include <string> //getline, string
# include <cstdlib> //exit

// Custom classes
# include "class/Zombie.hpp"

/* functions */

// Create a new zombie on the heap
Zombie*	newZombie(std::string name);

// Create a new zombie on the stack and announce itself
void randomChump(std::string name);

#endif
