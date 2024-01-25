#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "contact_list.h"

class	Contact
{
	public:
		Contact(void)
		{
			const std::string input_types[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
			for (int i = 0; i < 5; i++)
			{
				std::cout << "Please enter the " << input_types[i] << ": ";
				std::getline(std::cin, contact_info[i]);
			}
		}


	private:
		std::string contact_info[5];
};

#endif
