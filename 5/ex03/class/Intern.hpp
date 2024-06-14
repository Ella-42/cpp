/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:49:16 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/14 22:34:09 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

/* Includes */

# include <iostream> //input\output
# include <exception> //exception

# include "AForm.hpp" //AForm
# include "ShrubberyCreationForm.hpp" //ShrubberyCreationForm
# include "RobotomyRequestForm.hpp" //RobotomyRequestForm
# include "PresidentialPardonForm.hpp" //PresidentialPardonForm

// Custom class: Intern
class	Intern
{
	public:
		// Constructor
		Intern(void);

		// Copy constructor
		Intern(const Intern& other);

		// Copy assignment operator overload
		Intern& operator= (const Intern& other);

		// Invalid Form error throw
		class InvalidForm:
		public std::exception
		{
			public:
				// Error message
				virtual const char* what() const throw();
		};

		// Form picker
		AForm* makeForm(const std::string& form, const std::string& target);

		// Destructor
		~Intern(void);

	private:
		// Form creation
		AForm* _make_shrubbery_creation_form(const std::string& target);
		AForm* _make_robotomy_request_form(const std::string& target);
		AForm* _make_presidential_pardon_form(const std::string& target);
};

#endif
