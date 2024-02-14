/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:21:53 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 22:24:10 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing
//int	main(void)
//{
    //FragTrap warrior1("Jack");
    //FragTrap warrior2("Aku");
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
    FragTrap warrior1("Warrior1");
    FragTrap warrior2("Warrior2");

    // Initial attacks
    std::cout << "\nInitial attacks:\n";
    warrior1.attack(warrior2_name);
    warrior2.takeDamage(10);

    warrior2.attack(warrior1_name);
    warrior1.takeDamage(130);

	// Repairing
    std::cout << "\nRepairing:\n";
	warrior2.beRepaired(50);

	// High five'ing
    std::cout << "\nHigh five'ing:\n";
	warrior2.highFivesGuys();

    // Testing edge cases
    std::cout << "\n\nEdge Cases:\n\n";

    // Trying to take damage after perishing
    std::cout << "\nTaking damage after perishing:\n";
    FragTrap warrior3("Warrior3");
	std::string warrior3_name("Warrior3");
    warrior3.attack(warrior2_name);
    warrior2.takeDamage(1000);
    warrior3.attack(warrior2_name);
    warrior2.takeDamage(10);

    // Repairing after perishing
    std::cout << "\nRepairing after perishing:\n";
    warrior2.beRepaired(50);

    // Guarding after perishing
    std::cout << "\nHigh five'ing after perishing:\n";
	warrior2.highFivesGuys();

    // Testing Copy Constructor and Assignment Operator
    std::cout << "\nTesting Copy Constructor and Assignment Operator:\n";
    FragTrap warrior4 = warrior1;
    FragTrap warrior5("Warrior5");
	std::string warrior4_name("Warrior4");
    warrior4 = warrior5;

    // Testing if copy and assignment worked
	std::cout << "\nTesting if copy and assignment worked:\n";
    warrior3.attack(warrior4_name);
    warrior4.takeDamage(10);
	std::cout << "\nTesting destructors:\n";
}
