/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:57:42 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/11 14:57:06 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Includes and function references
#include "main.hpp"
#include <limits> //double_max

#include "class/BitcoinExchange.hpp" //BitcoinExchange

// Validates and processes Bitcoin exchange rate data from a specified input file
int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Error: Incorrect number of arguments\n", 1);

	try
	{
		std::ifstream input_file;
		open_file(av[1], input_file);

		BitcoinExchange Bitcoin(input_file);
	}

	catch (const std::exception& error)
	{
		std::cerr << error.what() << '\n';
		return (1);
	}
}
