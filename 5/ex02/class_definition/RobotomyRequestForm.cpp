/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:44:37 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/14 18:40:25 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/RobotomyRequestForm.hpp"

// Constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm: creating object\n";
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
AForm(other), _target(other._target)
{
	std::cout << "RobotomyRequestForm: copying object\n";
}

// Copy assignment operator overload
RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm: copying object (assignement)\n";

	if (this != &other)
		this->_target = other._target;

	return (*this);
}

// Execute form
void RobotomyRequestForm::execute_form(void) const
{
	std::cout << "BZZZZZZZZ\n";

	int odds = std::rand();

	if (!(odds % 2))
		return (std::cout << "Robotomy failed... .\n", void());
	std::cout << this->_target << " was robotomized successfully.\n";
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm: destroying object\n";
}
