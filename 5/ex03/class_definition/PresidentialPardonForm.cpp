/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:44:37 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/14 19:47:13 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/PresidentialPardonForm.hpp"

// Constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm: creating object\n";
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
AForm(other), _target(other._target)
{
	std::cout << "PresidentialPardonForm: copying object\n";
}

// Copy assignment operator overload
PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm: copying object (assignement)\n";

	if (this != &other)
		this->_target = other._target;

	return (*this);
}

// Execute form
void PresidentialPardonForm::execute_form(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm: destroying object\n";
}
