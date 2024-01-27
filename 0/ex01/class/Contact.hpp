/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:54:58 by lpeeters          #+#    #+#             */
/*   Updated: 2024/01/27 17:08:17 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "../contact_list.h"

class	Contact
{
	public:
		Contact(void)
		{
			for (int i = 0; i < 5; i++)
				contact_info[i] = "";
		}
		
		void	new_contact(void)
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

		void	print(void)
		{
			const std::string input_types[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
			
			for (int i = 0; i < 5; i++)
				std::cout << input_types[i] << ": " << contact_info[i] << '\n';
		}

		std::string	retrieve_contact_info_detail(int index)
		{
			if (0 > index || index > 4)
				throw std::out_of_range("Error: access violation while retrieving contact info detail");
			else
				return (contact_info[index]);
		}

	private:
		std::string contact_info[5];
};

#endif
