/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:02:00 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/12 18:45:29 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string& name) : _name(name)
{
	std::cout << "Bureaucrat: creating object\n";
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Bureaucrat: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other)
{
	std::cout << "Bureaucrat: copying object (assignement)\n";
	if (this != &other)
		/*this->_ = other._*/;
	return (*this);
}

// Destructor
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat: destroying object\n";
}
