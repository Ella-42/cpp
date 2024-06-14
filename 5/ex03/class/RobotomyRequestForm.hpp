/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:41:12 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/14 18:40:22 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

/* Includes */

# include <iostream> //input\output
# include <cstdlib> //rand

# include "AForm.hpp" //Form

// Custom class: RobotomyRequestForm
class	RobotomyRequestForm:
public AForm
{
	public:
		// Constructor
		RobotomyRequestForm(const std::string& target);

		// Copy constructor
		RobotomyRequestForm(const RobotomyRequestForm& other);

		// Copy assignment operator overload
		RobotomyRequestForm& operator= (const RobotomyRequestForm& other);

		// Execute form
		virtual void execute_form(void) const;

		// Destructor
		~RobotomyRequestForm(void);

	private:
		// Target's file name
		std::string _target;
};

#endif
