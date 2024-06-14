/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:01:51 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/14 18:03:30 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

/* Includes */

# include <iostream> //input\output
# include <string> //string
# include <exception> //exception
# include <fstream> //ofstream

# include "Bureaucrat.hpp" //Bureaucrat

class Bureaucrat; //Bureaucrat

// Custom class: AForm
class	AForm
{
	public:
		// Constructor
		AForm(const std::string& name, const short& grade_sign, const short& grade_execute);

		// Copy constructor
		AForm(const AForm& other);

		// Copy assignment operator overload
		AForm& operator= (const AForm& other);

		// Grade value too low exception error throw
		class GradeTooLowException:
		public std::exception
		{
			public:
				// Error message
				virtual const char* what() const throw();
		};

		// Grade value too high exception error throw
		class GradeTooHighException:
		public std::exception
		{
			public:
				// Error message
				virtual const char* what() const throw();
		};

		// Form not yet signed error throw
		class FormNotSigned:
		public std::exception
		{
			public:
				// Error message
				virtual const char* what() const throw();
		};

		// Bureaucrat execute grade too low error throw
		class BureaucratTooLowExecuteGrade:
		public std::exception
		{
			public:
				// Error message
				virtual const char* what() const throw();
		};

		// Retrieve the name of the object
		const std::string getName(void) const;

		// Retrieve the status of the object
		short getStatus(void) const;

		// Retrieve the grade of the object for signing
		short getGradeSign(void) const;

		// Retrieve the grade of the object for executing
		short getGradeExecute(void) const;

		// Sign form if requirements are met
		void beSigned(Bureaucrat& bureaucrat);

		// Check if form requirements are met
		void execute(const Bureaucrat& executor) const;

		// Execute form
		virtual void execute_form(void) const = 0;

		// Destructor
		virtual ~AForm(void);

	private:
		// Object's name
		const std::string _name;

		// Object's signing value
		bool _is_signed;

		// Object's sign grade
		const short _grade_sign;

		// Object's execute grade
		const short _grade_execute;
};

// Output stream overload to allow easier object information printing
std::ostream& operator<< (std::ostream& output_stream, AForm& object_form);

#endif
