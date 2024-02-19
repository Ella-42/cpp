/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:38:45 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 23:41:48 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../contact_list.h"

Contact::Contact(void)
{
	for (int i = 0; i < 5; i++)
		contact_info[i] = "";
}

void Contact::new_contact(void)
{
	const std::string input_types[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter the " << input_types[i] << ": ";
		std::getline(std::cin, contact_info[i]);
		
		if (std::cin.eof())
			std::cout << "\n:(\n", std::exit(EXIT_SUCCESS);
		
		if (contact_info[i].empty())
			i--, std::cerr << "\nInvalid input: fields may not be empty.\n\n";
	}
}

void Contact::print(void)
{
	const std::string input_types[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
	
	for (int i = 0; i < 5; i++)
		std::cout << input_types[i] << ": " << contact_info[i] << '\n';
}

std::string	Contact::retrieve_contact_info_detail(int index)
{
	if (0 > index || index > 4)
		throw std::out_of_range("Error: access violation while retrieving contact info detail");
	else
		return (contact_info[index]);
}
