/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:30:11 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/13 21:02:51 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Bureaucrat.hpp" //Bureaucrat

// testing
int	main(void)
{
	try
	{
		Bureaucrat* Bart = new Bureaucrat("Bart", 1);
		try
		{
			Bart->increment();
			Bart->decrement();
		}
		catch (std::exception& error)
		{
			std::cerr << error.what();
		}
		std::cout << *Bart;
		delete Bart;
	}
	catch (std::exception& error)
	{
		std::cerr << error.what();
	}
}
