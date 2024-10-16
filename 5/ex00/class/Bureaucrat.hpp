/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:01:51 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/13 20:38:40 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

/* Includes */

# include <iostream> //input\output
# include <string> //string
# include <exception> //exception

// Custom class: Bureaucrat
class	Bureaucrat
{
	public:
		// Constructor
		Bureaucrat(const std::string& name, const short& grade);

		// Copy constructor
		Bureaucrat(const Bureaucrat& other);

		// Copy assignment operator overload
		Bureaucrat& operator = (const Bureaucrat& other);

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

		// Retrieve the grade of the object
		short getGrade(void);

		// Decrease the object's grade
		void decrement(void);

		// Increase the object's grade
		void increment(void);

		// Destructor
		~Bureaucrat(void);

	private:
		// Object's name
		const std::string _name;

		// Object's grade
		short _grade;
};

// Output stream overload to allow easier object information printing
std::ostream& operator<< (std::ostream& output_stream, Bureaucrat& object_bureaucrat);

#endif
