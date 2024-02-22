/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:05:16 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/22 20:46:38 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Colors
#define DARK_BLUE "\033[34m"
#define DEFAULT "\033[0m"

// Testing
int main(void)
{
	// Constructing
	std::cout << DARK_BLUE "Constructing" DEFAULT "\n";
	const Animal* meta[10];
	for (int i = 0; i < 5; i++)
	{
		if (i % 2)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}

	// Functions
	std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Animal type: " << meta[i]->getType() << "\nSound: ";
		meta[i]->makeSound();
		std::cout << '\n';
	}

	// Deconstructing
	std::cout << DARK_BLUE "Deconstructing" DEFAULT "\n";
	for (int i = 0; i < 5; i++)
		delete(meta[i]);

	// Deep copy tests
	std::cout << "\n\n" DARK_BLUE "DEEP COPY TESTING\n\n\nConstructing" DEFAULT "\n";

	// Constructing animal
	Dog* animal = new Dog();
	//Cat* animal = new Cat();

	// Setting values for tests
	animal->setIdea("I'm hungry", 0);
	animal->setIdea("I'm sad", 1);
	animal->setIdea("I'm angry", 2);

	// Constructing copy
	Dog* animal_copy = new Dog(*animal);
	//Cat* animal_copy = new Cat(*animal);

	// Testing error handling
	std::cout << "\n" DARK_BLUE "Error handling" DEFAULT "\n";
	animal->setIdea("Bleh", 101);

	// Testing ideas
	std::cout << "\n" DARK_BLUE "Ideas of animal" DEFAULT "\n" << animal->getType() << " has the following ideas: \n";
	for (int i = 0; i < 3; i++)
		std::cout << animal->getBrainAddress() << ": " << animal->getIdea(i) << '\n';

	// Testing error handling
	std::cout << "\n" DARK_BLUE "Error handling" DEFAULT "\n";
	animal_copy->getIdea(101);

	// Deconstructing animal
	std::cout << "\n" DARK_BLUE "Deconstructing animal" DEFAULT "\n";
	delete(animal);

	// Testing ideas of deep copy
	std::cout << "\n" DARK_BLUE "Ideas of copied animal" DEFAULT "\n" << animal_copy->getType() << " copy has the following ideas: \n";
	for (int i = 0; i < 3; i++)
		std::cout << animal_copy->getBrainAddress() << ": " << animal_copy->getIdea(i) << '\n';

	// Testing error handling
	std::cout << "\n" DARK_BLUE "Error handling" DEFAULT "\n";
	animal_copy->getIdea(101);

	// Deconstructing deep copy
	std::cout << "\n" DARK_BLUE "Deconstructing copied animal" DEFAULT "\n";
	delete(animal_copy);
}
