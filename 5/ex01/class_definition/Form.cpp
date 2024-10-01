/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:02:00 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/01 18:23:12 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Form.hpp"

// Constructor
Form::Form(const std::string& name, const short& grade_sign, const short& grade_execute): _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	std::cout << "Form: creating object\n";

	this->_is_signed = false;

	if (this->_grade_sign > 150 || this->_grade_execute > 150)
		throw (GradeTooLowException());

	if (this->_grade_sign < 1 || this->_grade_execute < 1)
		throw (GradeTooHighException());
}

// Copy constructor
Form::Form(const Form& other): _is_signed(other._is_signed), _grade_sign(other._grade_sign), _grade_execute(other._grade_execute)
{
	std::cout << "Form: copying object\n";
}

// Copy assignment operator overload
Form& Form::operator = (const Form& other)
{
	std::cout << "Form: copying object (assignement)\n";

	if (this != &other)
		this->_is_signed = other._is_signed;

	return (*this);
}

// Grade value too low exception error throw
const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form: Error: Grade too low.\n");
}

// Grade value too high exception error throw
const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form: Error: Grade too high.\n");
}

// Retrieve the name of the object
const std::string Form::getName(void)
{
	return (this->_name);
}

// Retrieve the status of the object
short Form::getStatus(void)
{
	return (this->_is_signed);
}

// Retrieve the grade of the object for signing
short Form::getGradeSign(void)
{
	return (this->_grade_sign);
}

// Retrieve the grade of the object for executing
short Form::getGradeExecute(void)
{
	return (this->_grade_execute);
}

// Sign form if requirements are met
void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (this->_is_signed)
		return (std::cout << "Form '" << this->_name  << "' was already signed.\n", void());

	if (bureaucrat.getGrade() > this->_grade_sign)
		throw (GradeTooLowException());

	this->_is_signed = true;

	std::cout << "Bureaucrat '" << bureaucrat.getName() << "' signed Form '" << this->_name << "'.\n";
}

// Destructor
Form::~Form(void)
{
	std::cout << "Form: destroying object\n";
}

// Output stream overload to allow easier object information printing
std::ostream& operator<< (std::ostream& output_stream, Form& object_form)
{
	std::string status;

	if (object_form.getStatus())
		status = "signed";
	else
		status = "unsigned";

	output_stream << "Form '" << object_form.getName() << "' has a sign grade requirement of " << object_form.getGradeSign() << " and an execute grade requirement of " << object_form.getGradeExecute() << ", it is currently " << status << ".\n";

	return (output_stream);
}
