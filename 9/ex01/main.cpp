/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:38:46 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/12 18:37:14 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output
#include <exception> //exception

#include "class/RPN.hpp" //RPN

// Take as input a mathematical equation in reverse Polish notation, validate it and print result
int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Invalid number of arguments\n", 1);

	try
	{
		RPN equation(av[1]);
		equation.print_result();
	}

	catch (const std::exception& error)
	{
		std::cerr << "Error: " << error.what() << '\n';
	}
}
