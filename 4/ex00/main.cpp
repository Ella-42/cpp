/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:05:16 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/15 23:04:07 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing

// Colors
#define DARK_BLUE "\033[34m"
#define DEFAULT "\033[0m"

// Testing
int main(void)
{
	// Constructing
	std::cout << "\n" DARK_BLUE "Constructing" DEFAULT "\n";
	const Animal* meta = new Animal();

	// Testing makeSound()
	std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nAnimal type: " << meta->getType() << "\nSound: ";
	meta->makeSound();

	// Deconstructing
	std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	delete meta;

	// Constructing
	std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	const Animal* cat = new Cat();

	// Testing makeSound()
	std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nCat type: " << cat->getType() << "\nSound: ";
	cat->makeSound();

	// Deconstructing
	std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	delete cat;

	// Constructing
	std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	const Animal* dog = new Dog();

	// Testing makeSound()
	std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nDog type: " << dog->getType() << "\nSound: ";
	dog->makeSound();

	// Deconstructing
	std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	delete dog;

	// Constructing
	std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	const WrongAnimal* wrong_meta = new WrongAnimal();

	// Testing makeSound()
	std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nAnimal type: " << wrong_meta->getType() << "\nSound: ";
	wrong_meta->makeSound();

	// Deconstructing
	std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	delete wrong_meta;

	// Constructing
	std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	const WrongAnimal* wrong_cat = new WrongCat();

	// Testing makeSound()
	std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nWrongCat type: " << wrong_cat->getType() << "\nSound: ";
	wrong_cat->makeSound();

	// Deconstructing
	std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	delete wrong_cat;

	// Constructing
	std::cout << "\n-------------------------------------------------------\n\n" DARK_BLUE "Constructing" DEFAULT "\n";
	const WrongCat* wrong_kitty = new WrongCat();

	// Testing makeSound()
	std::cout << "\n" DARK_BLUE "Testing" DEFAULT "\nWrongCat type: " << wrong_kitty->getType() << "\nSound: ";
	wrong_kitty->makeSound();

	// Deconstructing
	std::cout << "\n" DARK_BLUE "Deconstructing" DEFAULT "\n";
	delete wrong_kitty;
}
