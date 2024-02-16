/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:05:16 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 18:32:24 by lpeeters         ###   ########.fr       */
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
		std::cout << animal->getBrainAddress(i) << ": " << animal->getIdea(i) << '\n';

	// Testing error handling
	std::cout << "\n" DARK_BLUE "Error handling" DEFAULT "\n";
	animal_copy->getIdea(101);
	animal_copy->getBrainAddress(101);

	// Deconstructing animal
	std::cout << "\n" DARK_BLUE "Deconstructing animal" DEFAULT "\n";
	delete(animal);

	// Testing ideas of deep copy
	std::cout << "\n" DARK_BLUE "Ideas of copied animal" DEFAULT "\n" << animal_copy->getType() << " b has the following ideas: \n";
	for (int i = 0; i < 3; i++)
		std::cout << animal_copy->getBrainAddress(i) << ": " << animal_copy->getIdea(i) << '\n';

	// Testing error handling
	std::cout << "\n" DARK_BLUE "Error handling" DEFAULT "\n";
	animal_copy->getIdea(101);
	animal_copy->getBrainAddress(101);

	// Deconstructing deep copy
	std::cout << "\n" DARK_BLUE "Deconstructing copied animal" DEFAULT "\n";
	delete(animal_copy);
}

// Testing
//int main(void)
//{
	//Animal* array[100];
	//for (int i = 0; i < 100; ++i)
	//{
		//if (i < 50)
			//array[i] = new Dog();
		//else
			//array[i] = new Cat();
	//}
	//for (int i = 0; i < 100; ++i)
		//delete array[i];
//}

// Testing
//int main(void)
//{
	//// Creating an instance of Dog
	//Dog* originalDog = new Dog();
	//std::cout << "Original Dog's _brain address: " << originalDog->getBrainAddress() << '\n';

	//// Making a copy of Dog
	//Dog* copiedDog = new Dog(*originalDog); // Use the copy constructor
	//std::cout << "Copied Dog's _brain address: " << copiedDog->getBrainAddress() << '\n';

	//// Making a copy of a copy of Dog
	//Dog* copiedCopiedDog = new Dog(*originalDog); // Use the copy constructor
	//std::cout << "CopiedCopied Dog's _brain address: " << copiedCopiedDog->getBrainAddress() << '\n';

	//// Comparing addresses
	//if ((originalDog->getBrainAddress() != copiedDog->getBrainAddress()) && (originalDog->getBrainAddress() != copiedCopiedDog->getBrainAddress()) && (copiedDog->getBrainAddress() != copiedCopiedDog->getBrainAddress()))
	//{
		//std::cout << "Deep copy confirmed\n";
	//}
	//else
	//{
		//std::cout << "Shallow copy detected\n";
	//}

	//// Cleaning up
	//delete originalDog;
	//delete copiedDog;
	//delete copiedCopiedDog;
//}

// Testing
//int main()
//{
	//const Animal* j = new Dog();
	//const Animal* i = new Cat();
	//delete j;//should not create a leak
	//delete i;
	//return 0;
//}

// Colors
//#define DARK_BLUE "\033[34m"
//#define DEFAULT "\033[0m"

// Testing
//int main(void)
//{
	//// Constructing
	//std::cout << "\n" DARK_BLUE "Constructing" DEFAULT "\n";
	//const Animal* meta = new Animal();

	//// Testing makeSound()
	//std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nAnimal type: " << meta->getType() << "\nSound: ";
	//meta->makeSound();

	//// Deconstructing
	//std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	//delete meta;

	//// Constructing
	//std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	//const Animal* cat = new Cat();

	//// Testing makeSound()
	//std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nCat type: " << cat->getType() << "\nSound: ";
	//cat->makeSound();

	//// Deconstructing
	//std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	//delete cat;

	//// Constructing
	//std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	//const Animal* dog = new Dog();

	//// Testing makeSound()
	//std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nDog type: " << dog->getType() << "\nSound: ";
	//dog->makeSound();

	//// Deconstructing
	//std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	//delete dog;

	//// Constructing
	//std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	//const WrongAnimal* wrong_meta = new WrongAnimal();

	//// Testing makeSound()
	//std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nAnimal type: " << wrong_meta->getType() << "\nSound: ";
	//wrong_meta->makeSound();

	//// Deconstructing
	//std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	//delete wrong_meta;

	//// Constructing
	//std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	//const WrongAnimal* wrong_cat = new WrongCat();

	//// Testing makeSound()
	//std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nWrongCat type: " << wrong_cat->getType() << "\nSound: ";
	//wrong_cat->makeSound();

	//// Deconstructing
	//std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	//delete wrong_cat;

	//// Constructing
	//std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	//const WrongCat* wrong_kitty = new WrongCat();

	//// Testing makeSound()
	//std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nWrongCat type: " << wrong_kitty->getType() << "\nSound: ";
	//wrong_kitty->makeSound();

	//// Deconstructing
	//std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	//delete wrong_kitty;
//}
