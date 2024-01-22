/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_list.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:07:18 by lpeeters          #+#    #+#             */
/*   Updated: 2024/01/22 15:31:19 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Contacts.hpp"

int	main(void)
{
	std::cout << "Ring ring!\nHello?\n\nWhat would you like to do?\nPlease enter one of 3 commands: 'ADD', 'SEARCH' or 'EXIT'.\n";

	bool exit_status = false;
	while (exit_status == false)
	{
		std::string	in;
		std::getline(std::cin, in);
		if (in == "ADD")
			;
		else if (in == "SEARCH")
			;
		else if (in == "EXIT")
		{
			exit_status = true;
			continue ;
		}
		else
		{
			std::cout << "not a valid command!\n";
			continue ;
		}

		std::cout << "What would you like to do next?\nPlease enter one of 3 commands: 'ADD', 'SEARCH' or 'EXIT'.\n";

	}
}
