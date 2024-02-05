/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:47:39 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/05 18:22:44 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// Simple program that takes commands to create zombies (scary)
int	main(void)
{
	std::cout << "\nWelcome, this program exists for testing purposes and will work simply by taking inputs.\n\nWhat function should we test first?\nFunctions: 'Zombie', 'newZombie', 'randomChump'. (Run the command 'Exit' to escape from any zombies!)\n";

	bool exit_status = false;
	while (exit_status == false)
	{
		std::string	command;
		std::getline(std::cin, command);

		if (std::cin.eof() || command == "Exit")
		{
			exit_status = true;
			continue ;
		}

		else if (command == "Zombie")
		{
			std::cout << "\nWhat should we call the little guy?\n";

			std::string	name;
			std::getline(std::cin, name);

			if (std::cin.eof())
				std::exit(EXIT_SUCCESS);

			std::cout << '\n';

			Zombie zombie(name);
			zombie.announce();
		}

		else if (command == "newZombie")
		{
			std::cout << "\nWhat should we call the little guy?\n";

			std::string	name;
			std::getline(std::cin, name);

			if (std::cin.eof())
				std::exit(EXIT_SUCCESS);

			Zombie* zombie = newZombie(name);
			delete zombie;
		}

		else if (command == "randomChump")
		{
			std::cout << "\nWhat should we call the little guy?\n";

			std::string	name;
			std::getline(std::cin, name);

			if (std::cin.eof())
				std::exit(EXIT_SUCCESS);

			std::cout << '\n';

			Zombie* zombie = randomChump(name);
			delete zombie;
		}

		else
		{
			std::cout << "\nNot a valid function!\nFunctions: 'Zombie', 'newZombie', 'randomChump'. (Run the command 'Exit' to escape from any zombies!)\n";
			continue ;
		}

		std::cout << "\nWhat function should we test next?\nFunctions: 'Zombie', 'newZombie', 'randomChump'. (Run the command 'Exit' to escape from any zombies!)\n";
	}
}
