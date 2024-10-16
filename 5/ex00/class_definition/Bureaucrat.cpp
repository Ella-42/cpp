/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:02:00 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/13 21:21:09 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string& name, const short& grade): _name(name)
{
	std::cout << "Bureaucrat: creating object\n";

	if (grade > 150)
		throw (GradeTooLowException());

	else if (grade < 1)
		throw (GradeTooHighException());

	this->_grade = grade;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat: copying object\n";
}

// Copy assignment operator overload
Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other)
{
	std::cout << "Bureaucrat: copying object (assignement)\n";

	if (this != &other)
		this->_grade = other._grade;

	return (*this);
}

// Grade value too low exception error throw
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: Error: Grade too low.\n");
}

// Grade value too high exception error throw
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Error: Grade too high.\n");
}

// Retrieve the name of the object
const std::string Bureaucrat::getName(void)
{
	return (this->_name);
}

// Retrieve the grade of the object
short Bureaucrat::getGrade(void)
{
	return (this->_grade);
}

// Decrease the object's grade
void Bureaucrat::decrement(void)
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();

	this->_grade++;
}

// Increase the object's grade
void Bureaucrat::increment(void)
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();

	this->_grade--;
}

// Destructor
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat: destroying object\n";
}

// Output stream overload to allow easier object information printing
std::ostream& operator<< (std::ostream& output_stream, Bureaucrat& object_bureaucrat)
{
	output_stream << object_bureaucrat.getName() << " is in grade " << object_bureaucrat.getGrade() << ".\n";

	return (output_stream);
}
