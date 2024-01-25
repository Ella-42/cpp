#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class	PhoneBook
{
	public:
		void		add_contact();
		std::string	*retrieve_contact(int index);

	private:
		std::string	contacts[8];
};

#endif
