/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:30:11 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/01 19:37:07 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception> //exception

#include "class/Bureaucrat.hpp" //Bureaucrat
#include "class/AForm.hpp" //Form
#include "class/Intern.hpp" //Intern

// testing
int	main(void)
{
	try
	{
		std::cout << "Error handling:\n";

		Intern Alex;

		AForm* ShrubberyCreation;
		AForm* RobotomyRequest;
		AForm* PresidentialPardon;

		try
		{
			Alex.makeForm("test", "test");
		}

		catch (std::exception& error)
		{
			std::cerr << error.what();
		}

		std::cout << "\nShrubbery creation:\n";

		try
		{
			ShrubberyCreation = Alex.makeForm("shrubbery creation", "Garden");

			std::cout << *ShrubberyCreation;
		}

		catch (std::exception& error)
		{
			std::cerr << error.what();
		}

		std::cout << "\nShrubbery destruction:\n";
		delete ShrubberyCreation;

		std::cout << "\nRobotomy request:\n";

		try
		{
			RobotomyRequest = Alex.makeForm("robotomy request", "A fool");

			std::cout << *RobotomyRequest;
		}

		catch (std::exception& error)
		{
			std::cerr << error.what();
		}

		std::cout << "\nRobotomy destruction:\n";
		delete RobotomyRequest;

		std::cout << "\nPresidential pardon:\n";

		try
		{
			PresidentialPardon = Alex.makeForm("presidential pardon", "Obama");

			std::cout << *PresidentialPardon;
		}

		catch (std::exception& error)
		{
			std::cerr << error.what();
		}

		std::cout << "\nPresidential destruction:\n";
		delete PresidentialPardon;
	}

	catch (std::exception& error)
	{
		std::cerr << error.what();
	}
}

//int main(void) {
	//Intern someRandomIntern;
	
	//AForm* scf;
	
	//try {
		//scf = someRandomIntern.makeForm("shrubbery creation", "Richard");
	//}
	//catch (std::exception& e) {
		//std::cerr << e.what() << std::endl;
	//}

	//std::cout << *scf << std::endl;

	//delete scf;

	//std::cout << std::endl;

	//AForm* rrf;
	
	//try {
		//rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	//}
	//catch (std::exception& e) {
		//std::cerr << e.what() << std::endl;
	//}

	//std::cout << *rrf << std::endl;

	//delete rrf;

	//std::cout << std::endl;
	
	//AForm* ppf;
	
	//try {
		//ppf = someRandomIntern.makeForm("presidential pardon", "Hector");
	//}
	//catch (std::exception& e) {
		//std::cerr << e.what() << std::endl;
	//}

	//std::cout << *ppf << std::endl;

	//delete ppf;
//}
