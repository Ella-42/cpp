/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:54:58 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 23:41:00 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "../contact_list.h"

class	Contact
{
	public:
		Contact(void);

		void new_contact(void);

		void print(void);

		std::string retrieve_contact_info_detail(int index);

	private:
		std::string contact_info[5];
};

#endif
