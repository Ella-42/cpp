#ifndef CONTACT_HPP
#define CONTACT_HPP

class	Contact
{
	public:
		void		set_contact_info(std::string info[5]);
		std::string	get_contact_info[5]();

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif
