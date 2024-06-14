/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:41:12 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/14 17:06:36 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

/* Includes */

# include <iostream> //input\output

# include "AForm.hpp" //Form

// Custom class: ShrubberyCreationForm
class	ShrubberyCreationForm:
public AForm
{
	public:
		// Constructor
		ShrubberyCreationForm(const std::string& target);

		// Copy constructor
		ShrubberyCreationForm(const ShrubberyCreationForm& other);

		// Copy assignment operator overload
		ShrubberyCreationForm& operator= (const ShrubberyCreationForm& other);

		// Execute form
		virtual void execute_form(void) const;

		// Destructor
		~ShrubberyCreationForm(void);

	private:
		// Target's file name
		std::string _target;
};

#endif
