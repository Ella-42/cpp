/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:21:53 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 22:03:45 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing
//int	main(void)
//{
    //ScavTrap warrior1("Jack");
    //ScavTrap warrior2("Aku");
	//std::string warrior1_name("Jack");
	//std::string warrior2_name("Aku");
	//unsigned int warrior1_attack_damage(5);
	//unsigned int warrior2_attack_damage(3);
	//unsigned int repair_points(5);

    //// Round 1
    //warrior1.attack(warrior2_name);
    //warrior2.takeDamage(warrior1_attack_damage);

    //warrior2.attack(warrior1_name);
    //warrior1.takeDamage(warrior2_attack_damage);

    //// Repairing
    //warrior1.beRepaired(repair_points);
    //warrior2.beRepaired(repair_points);

    //// Round 2
    //warrior1.attack(warrior2_name);
    //warrior2.takeDamage(warrior1_attack_damage);

    //warrior2.attack(warrior1_name);
    //warrior1.takeDamage(warrior2_attack_damage);
//}

int main(void)
{
	std::string warrior1_name("Warrior1");
	std::string warrior2_name("Warrior2");
    ScavTrap warrior1("Warrior1");
    ScavTrap warrior2("Warrior2");

    // Initial attacks
    std::cout << "\nInitial attacks:\n";
    warrior1.attack(warrior2_name);
    warrior2.takeDamage(10);

    warrior2.attack(warrior1_name);
    warrior1.takeDamage(130);

	// Repairing
    std::cout << "\nRepairing:\n";
	warrior2.beRepaired(50);

	// Guard mode
    std::cout << "\nGuard mode:\n";
	warrior2.guardGate();

    // Testing edge cases
    std::cout << "\n\nEdge Cases:\n\n";

    // Trying to take damage after perishing
    std::cout << "\nTaking damage after perishing:\n";
    ScavTrap warrior3("Warrior3");
	std::string warrior3_name("Warrior3");
    warrior3.attack(warrior2_name);
    warrior2.takeDamage(1000);
    warrior3.attack(warrior2_name);
    warrior2.takeDamage(10);

    // Repairing after perishing
    std::cout << "\nRepairing after perishing:\n";
    warrior2.beRepaired(50);

    // Guarding after perishing
    std::cout << "\nGuard mode after perishing:\n";
	warrior2.guardGate();

    // Guarding after already gate keeping
    std::cout << "\nGuard mode after already in guard mode:\n";
	warrior3.guardGate();
	warrior3.guardGate();

    // Testing Copy Constructor and Assignment Operator
    std::cout << "\nTesting Copy Constructor and Assignment Operator:\n";
    ScavTrap warrior4 = warrior1;
    ScavTrap warrior5("Warrior5");
	std::string warrior4_name("Warrior4");
    warrior4 = warrior5;

    // Testing if copy and assignment worked
	std::cout << "\nTesting if copy and assignment worked:\n";
    warrior3.attack(warrior4_name);
    warrior4.takeDamage(10);
	std::cout << "\nTesting destructors:\n";
}
