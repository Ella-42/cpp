/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:01:51 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/13 20:39:39 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

/* Includes */

# include <iostream> //input\output
# include <string> //string
# include <exception> //exception

# include "Bureaucrat.hpp" //Bureaucrat

class Bureaucrat; //Bureaucrat

// Custom class: Form
class	Form
{
	public:
		// Constructor
		Form(const std::string& name, const short& grade_sign, const short& grade_execute);

		// Copy constructor
		Form(const Form& other);

		// Copy assignment operator overload
		Form& operator = (const Form& other);

		// Grade value too low exception error throw
		class GradeTooLowException : public std::exception
		{
			public:
				// Error message
				virtual const char* what() const throw();
		};

		// Grade value too high exception error throw
		class GradeTooHighException : public std::exception
		{
			public:
				// Error message
				virtual const char* what() const throw();
		};

		// Retrieve the name of the object
		const std::string getName(void);

		// Retrieve the status of the object
		short getStatus(void);

		// Retrieve the grade of the object for signing
		short getGradeSign(void);

		// Retrieve the grade of the object for executing
		short getGradeExecute(void);

		// Sign form if requirements are met
		void beSigned(Bureaucrat& bureaucrat);

		// Destructor
		~Form(void);

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
std::ostream& operator<< (std::ostream& output_stream, Form& object_form);

#endif
