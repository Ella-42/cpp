/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:55:04 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 23:43:17 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../contact_list.h"

class	PhoneBook
{
	public:
		PhoneBook(void);

		void	add_contact(const Contact contact);

		Contact	retrieve_contact_info(int index) const;

		void	print(void);

	private:
		Contact	contacts[8];
		int current_index;
};

#endif
