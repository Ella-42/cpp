/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:30:11 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/01 18:24:41 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept> //exception

#include "class/Bureaucrat.hpp" //Bureaucrat
#include "class/Form.hpp" //Form

// testing
int	main(void)
{
	try
	{
		std::cout << "\nInitialization:\n";

		Bureaucrat* Bart = new Bureaucrat("Bart", 1);
		Form* Trans_Rights;

		try
		{
			Trans_Rights = new Form("trans rights", 1, 150);
		}

		catch (std::exception& error)
		{
			std::cerr << error.what();
			delete Bart;
			throw (std::runtime_error("Exiting..\n"));
		}

		try
		{
			std::cout << "\nFunctions:\n";

			Bart->decrement();
			Bart->increment();

			Bart->signForm(*Trans_Rights);

			Bart->signForm(*Trans_Rights);
			Trans_Rights->beSigned(*Bart);
		}

		catch (std::exception& error)
		{
			std::cerr << error.what();
		}

		std::cout << "\nValues:\n";

		std::cout << *Bart;
		std::cout << *Trans_Rights;

		std::cout << "\nDestruction:\n";

		delete Bart;
		delete Trans_Rights;
	}

	catch (std::exception& error)
	{
		std::cerr << error.what();
	}
}
