/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:20:48 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/06 17:33:28 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

/* inlcudes */

// Standard libraries
# include <iostream> //cin, cout
# include <string> //getline, string
# include <cstdlib> //exit
# include <sstream> //stringstream

// Custom classes
# include "class/Zombie.hpp"

/* functions */

// Do not yet know...
Zombie*	zombieHorde(int N, std::string name);

#endif
