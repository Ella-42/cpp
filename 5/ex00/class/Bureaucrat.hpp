/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:01:51 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/12 18:43:04 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

/* Includes */

# include <iostream> //input\output
# include <string> //string

// Custom class: Bureaucrat
class	Bureaucrat
{
	public:
		// Constructor
		Bureaucrat(const std::string& name);

		// Copy constructor
		Bureaucrat(const Bureaucrat& other);

		// Copy assignment operator overload
		Bureaucrat& operator = (const Bureaucrat& other);

		// Destructor
		~Bureaucrat(void);

	protected:
		;

	private:
		const std::string _name;
};

#endif
