#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact_list.h"

class	PhoneBook
{
	public:
		void	add_contact(const Contact contact);
		Contact	retrieve_contact(int index);

	private:
		Contact	contacts[8];
};

#endif
