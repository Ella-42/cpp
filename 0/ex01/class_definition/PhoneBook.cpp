/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:41:55 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 23:43:52 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../contact_list.h"

PhoneBook::PhoneBook(void)
{
	current_index = 0;
}

void PhoneBook::add_contact(const Contact contact)
{
	if (0 > current_index || current_index > 7)
		current_index = 0;
	
	contacts[current_index] = contact;
	current_index++;
}

Contact PhoneBook::retrieve_contact_info(int index) const
{
	if (-1 < index && index < 8)
		return (contacts[index]);
	
	else
		throw std::out_of_range("Error: access violation while retrieving contact info");
}

void PhoneBook::print(void)
{
	std::cout << "|     index|first name| last name|  nickname|\n";

	for (int y = 0; y < 8; y++)
	{
		std::cout << '|' << std::setw(10) << y << '|';

		for (int x = 0; x < 3; x++)
		{
			std::string contact_info_detail = contacts[y].retrieve_contact_info_detail(x);

			if (!contact_info_detail.empty())
			{
				if (contact_info_detail.length() > 9)
					contact_info_detail = contact_info_detail.substr(0, 9) + ".";

				std::cout << std::setw(10) << contact_info_detail;
			}

			else
				std::cout << std::setw(10) << "N/A";

			std::cout << '|';
		}

		std::cout << "\n";
	}
}
