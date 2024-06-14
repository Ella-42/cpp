/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:49:35 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/14 22:44:35 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Intern.hpp"

// Constructor
Intern::Intern(void)
{
	std::cout << "Intern: creating object\n";
}

// Copy constructor
Intern::Intern(const Intern& other)
{
	std::cout << "Intern: copying object\n";

	(void)other;
}

// Copy assignment operator overload
Intern& Intern::operator= (const Intern& other)
{
	std::cout << "Intern: copying object (assignement)\n";

	if (this != &other)
		/*this->_ = other._*/;

	return (*this);
}

// Invalid Form error throw
const char* Intern::InvalidForm::what() const throw()
{
	return ("Intern: Error: Invalid form.\n");
}

// Form picker
AForm* Intern::makeForm(const std::string& form, const std::string& target)
{
	const std::string form_types[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	AForm* (Intern::*functions[3])(const std::string&) = {&Intern::_make_shrubbery_creation_form, &Intern::_make_robotomy_request_form, &Intern::_make_presidential_pardon_form};

	for (short i = 0; i < 3; i++)
		if (form_types[i] == form)
			return ((this->*functions[i])(target));

	throw (InvalidForm());
}

// Destructor
Intern::~Intern(void)
{
	std::cout << "Intern: destroying object\n";
}

// ShrubberyCreationForm form creation
AForm* Intern::_make_shrubbery_creation_form(const std::string& target)
{
	std::cout << "Intern: creating ShrubberyCreationForm for '" << target << "'.\n";
	return (new ShrubberyCreationForm(target));
}

// RobotomyRequestForm form creation
AForm* Intern::_make_robotomy_request_form(const std::string& target)
{
	std::cout << "Intern: creating RobotomyRequestForm for '" << target << "'.\n";
	return (new RobotomyRequestForm(target));
}

// PresidentialPardonForm form creation
AForm* Intern::_make_presidential_pardon_form(const std::string& target)
{
	std::cout << "Intern: creating PresidentialPardonForm for '" << target << "'.\n";
	return (new PresidentialPardonForm(target));
}
