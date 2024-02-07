/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:51:02 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/07 18:29:01 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing
int	main(void)
{
	// Testing no weapon for HumanB
	HumanB subject_two("Lana");
	subject_two.attack();

	// Winner of this battle
	std::cout << "Well this seems mighty unfair, let's give Lana a chance\n";

	// Testing HumanB
	Weapon subject_two_weapon;
	subject_two_weapon.setType("sword");
	subject_two.setWeapon(subject_two_weapon);
	subject_two.attack();

	// Testing HumanA
	Weapon subject_one_weapon;
	subject_one_weapon.setType("axe");
	HumanA subject_one("Anna", subject_one_weapon);
	subject_one.attack();

	// Winner of this battle
	std::cout << "Lana wins\n";

	// Testing weapon change for HumanA
	subject_one_weapon.setType("hammer");
	subject_one.attack();

	// Testing weapon change for HumanB
	subject_two_weapon.setType("shovel");
	subject_two.attack();

	// Winner of this battle
	std::cout << "Anna wins\n";
}
