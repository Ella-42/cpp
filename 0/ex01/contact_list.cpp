/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_list.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:07:18 by lpeeters          #+#    #+#             */
/*   Updated: 2024/01/26 21:46:56 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_list.h"

// Converts a string into an integer
bool	convert_string_to_integer(const std::string string, int& integer)
{
	std::stringstream	converter;

	converter << string;
	converter >> integer;

	return (converter.eof() && !converter.fail());
}

// Displays contact list, requests an index and displays the details for that contact
void	search_contacts(PhoneBook contact_list)
{
	bool searching = true;
	while (searching)
	{
		std::cout << "\nPlease enter the index of the entry to display.\n";

		std::string	index_in;
		std::getline(std::cin, index_in);

		if (std::cin.eof())
			std::cout << ":(\n", std::exit(EXIT_SUCCESS);

		int index = -1;
		if (!convert_string_to_integer(index_in, index))
		{
			std::cerr << "Error: access violation while retrieving contact info\n";
			continue ;
		}

		std::cout << '\n';

		try
		{
			Contact search_result = contact_list.retrieve_contact_info(index);

			for (int i = 0; i < 5; i++)
				if (search_result.retrieve_contact_info_detail(i).empty())
					return (std::cout << "Nothing to see here...\n", void());

			search_result.print();
		}

		catch (const std::out_of_range& error)
		{
			std::cerr << error.what() << '\n';
			continue ;
		}

		searching = false;
	}
}

// Literally phonebook
int	main(void)
{
	std::cout << "Ring ring!\nHello?\n\nWhat would you like to do?\nPlease enter one of 3 commands: 'ADD', 'SEARCH' or 'EXIT'.\n";

	PhoneBook contact_list;

	bool exit_status = false;
	while (exit_status == false)
	{
		std::string	command;
		std::getline(std::cin, command);

		if (std::cin.eof())
			std::cout << ":(\n", std::exit(EXIT_SUCCESS);

		if (command == "ADD")
		{
			std::cout << '\n';
			Contact	contact;
			contact.new_contact();
			contact_list.add_contact(contact);
		}

		else if (command == "SEARCH")
		{
			std::cout << '\n';
			contact_list.print();
			search_contacts(contact_list);
		}

		else if (command == "EXIT")
		{
			exit_status = true;
			continue ;
		}

		else
		{
			std::cerr << "\nNot a valid command! (Validation is case-sensitive.)\nPlease enter one of 3 commands: 'ADD', 'SEARCH' or 'EXIT'.\n";
			continue ;
		}

		std::cout << "\nWhat would you like to do next?\nPlease enter one of 3 commands: 'ADD', 'SEARCH' or 'EXIT'.\n";
	}
}
