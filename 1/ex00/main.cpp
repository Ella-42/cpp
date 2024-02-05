/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:47:39 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/05 16:36:07 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// Simple program that takes commands to create zombies (scary)
int	main(void)
{
	std::cout << "Welcome, this program exists for testing purposes and will work simply by taking inputs in the form of commands.\n\nWhat should we test first?\nCommands: 'CreateZombie', 'Exit'.\n";

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

		if (command == "CreateZombie")
		{
			std::cout << "test\n";
		}

		else
		{
			std::cout << "\nNot a valid command!\nCommands: 'CreateZombie', 'Exit'.\n";
			continue ;
		}

		std::cout << "\nWhat should we test next?\nCommands: 'CreateZombie', 'Exit'.\n";
	}
}
