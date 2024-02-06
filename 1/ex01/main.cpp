/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:47:39 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/06 18:16:36 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// Converts a string into an integer
bool	convert_string_to_integer(const std::string string, int& integer)
{
	std::stringstream	converter;

	converter << string;
	converter >> integer;

	return (converter.eof() && !converter.fail());
}

// Simple program that takes commands to create zombies (scary)
int	main(void)
{
	std::cout << "\nWelcome, this program exists for testing purposes and will work simply by taking inputs.\n\nWhat function should we test first?\nFunctions: 'zombieHorde'. (Run the command 'Exit' to escape from any zombies!)\n";

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

		else if (command == "zombieHorde")
		{
			std::cout << "\nHow big should this zombie horde be?\n";

			std::string horde_size_string;
			std::getline(std::cin, horde_size_string);

			if (std::cin.eof())
				std::exit(EXIT_SUCCESS);

			int horde_size = -1;
			if (!convert_string_to_integer(horde_size_string, horde_size))
				std::cerr << "Error: converting string to integer\n";

			std::cout << "\nWhat should we call each of the little guys?\n";

			std::string	name;
			std::getline(std::cin, name);

			if (std::cin.eof())
				std::exit(EXIT_SUCCESS);

			std::cout << '\n';

			try
			{
				Zombie* zombie = zombieHorde(horde_size, name);

				for (int i = 0; i < horde_size; i++)
					zombie[i].announce();

				delete[] zombie;
			}

			catch (const std::out_of_range& error)
			{
				std::cerr << error.what() << '\n';
			}
		}

		else
		{
			std::cout << "\nNot a valid function!\nFunctions: 'zombieHorde'. (Run the command 'Exit' to escape from any zombies!)\n";
			continue ;
		}

		std::cout << "\nWhat function should we test next?\nFunctions: 'zombieHorde'. (Run the command 'Exit' to escape from any zombies!)\n";
	}
}
