/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:51:02 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/29 19:38:37 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(void)
{
	Weapon test = Weapon("test");
	HumanA test_subject = HumanA("test_subject", test);
}

// Testing
//int	main(void)
//{
	// Testing no weapon for HumanB
	//HumanB subject_two("Lana");
	//subject_two.attack();

	//// Winner of this battle
	//std::cout << "Well this seems mighty unfair, let's give Lana a chance.\n";

	// Testing HumanB
	//Weapon subject_two_weapon = Weapon("sword");
	//subject_two.setWeapon(subject_two_weapon);
	//subject_two.attack();

	//// Testing HumanA
	//Weapon subject_one_weapon = Weapon("axe");
	//HumanA subject_one("Anna", subject_one_weapon);
	//subject_one.attack();

	//// Winner of this battle
	//std::cout << "Lana wins!\n";

	//// Testing weapon change for HumanA
	//subject_one_weapon.setType("hammer");
	//subject_one.attack();

	//// Testing weapon change for HumanB
	//subject_two_weapon.setType("shovel");
	//subject_two.attack();

	//// Winner of this battle
	//std::cout << "Anna wins!\n";
//}

//int main()
//{
	//{
	//Weapon club = Weapon("crude spiked club");
	//HumanA bob("Bob", club);
	//bob.attack();
	//club.setType("some other type of club");
	//bob.attack();
	//}
	//{
	//Weapon club = Weapon("crude spiked club");
	//HumanB jim("Jim");
	//jim.setWeapon(club);
	//jim.attack();
	//club.setType("some other type of club");
	//jim.attack();
	//}
	//return 0;
//}
