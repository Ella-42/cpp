/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:41:12 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/14 19:03:43 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

/* Includes */

# include <iostream> //input\output
# include <cstdlib> //rand

# include "AForm.hpp" //Form

// Custom class: PresidentialPardonForm
class	PresidentialPardonForm:
public AForm
{
	public:
		// Constructor
		PresidentialPardonForm(const std::string& target);

		// Copy constructor
		PresidentialPardonForm(const PresidentialPardonForm& other);

		// Copy assignment operator overload
		PresidentialPardonForm& operator= (const PresidentialPardonForm& other);

		// Execute form
		virtual void execute_form(void) const;

		// Destructor
		~PresidentialPardonForm(void);

	private:
		// Target's file name
		std::string _target;
};

#endif
