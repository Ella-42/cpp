/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:21:53 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 20:14:43 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing
//int	main(void)
//{
    //ClapTrap clapTrap1("Jack");
    //ClapTrap clapTrap2("Aku");
	//std::string clapTrap1_name("Jack");
	//std::string clapTrap2_name("Aku");
	//unsigned int clapTrap1_attack_damage(5);
	//unsigned int clapTrap2_attack_damage(3);
	//unsigned int repair_points(5);

    //// Round 1
    //clapTrap1.attack(clapTrap2_name);
    //clapTrap2.takeDamage(clapTrap1_attack_damage);

    //clapTrap2.attack(clapTrap1_name);
    //clapTrap1.takeDamage(clapTrap2_attack_damage);

    //// Repairing
    //clapTrap1.beRepaired(repair_points);
    //clapTrap2.beRepaired(repair_points);

    //// Round 2
    //clapTrap1.attack(clapTrap2_name);
    //clapTrap2.takeDamage(clapTrap1_attack_damage);

    //clapTrap2.attack(clapTrap1_name);
    //clapTrap1.takeDamage(clapTrap2_attack_damage);
//}

int main(void)
{
	std::string clapTrap1_name("Warrior1");
	std::string clapTrap2_name("Warrior2");
    ClapTrap clapTrap1("Warrior1");
    ClapTrap clapTrap2("Warrior2");

    // Initial attacks
    std::cout << "\nInitial attacks:\n";
    clapTrap1.attack(clapTrap2_name);
    clapTrap2.takeDamage(1);

    clapTrap2.attack(clapTrap1_name);
    clapTrap1.takeDamage(13);

	// Repairing
    std::cout << "\nRepairing:\n";
	clapTrap2.beRepaired(5);

    // Testing edge cases
    std::cout << "\n\nEdge Cases:\n\n";

    // Trying to attack with no energy points
    std::cout << "\nAttacking with no energy points:\n";
    for (int i = 0; i < 8; ++i)
        clapTrap2.attack(clapTrap1_name);
    clapTrap2.attack(clapTrap1_name);

    // Trying to take damage after perishing
    std::cout << "\nTaking damage after perishing:\n";
    ClapTrap clapTrap3("Warrior3");
	std::string clapTrap3_name("Warrior3");
    clapTrap3.attack(clapTrap2_name);
    clapTrap2.takeDamage(100);
    clapTrap3.attack(clapTrap2_name);
    clapTrap2.takeDamage(1);

    // Repairing after perishing
    std::cout << "\nRepairing after perishing:\n";
    clapTrap2.beRepaired(5);

    // Testing Copy Constructor and Assignment Operator
    std::cout << "\nTesting Copy Constructor and Assignment Operator:\n";
    ClapTrap clapTrap4 = clapTrap1;
    ClapTrap clapTrap5("Warrior5");
	std::string clapTrap4_name("Warrior4");
    clapTrap4 = clapTrap5;

    // Testing if copy and assignment worked
    clapTrap3.attack(clapTrap4_name);
    clapTrap4.takeDamage(1);
}
