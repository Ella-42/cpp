/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:40:16 by lpeeters          #+#    #+#             */
/*   Updated: 2024/01/11 20:59:10 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

//convert a string to a number
int	convert_string_to_number(std::string input)
{
	//define stringstream object and number to return
	std::stringstream	string_to_number;
	int					number;

	//convert string to number
	string_to_number << input;
	string_to_number >> number;

	//return number
	return (number);
}

//simple program that takes an input directly from the argument vector and prints whether it is odd or even
int	main(int ac, char **av)
{
	//simple error handling for an invalid amount of inputs
	if (ac != 2)
		return (std::cout << "Error: invalid amount of arguments\nPlease specify a singular argument!\n", 1);

	//convert input of type string to type integer
	int number = convert_string_to_number(av[1]);

	//if number is even, print "Even", followed by a newline
	if (number % 2 == 0)
		std::cout << "Even\n";

	//if number is uneven, print "Odd", followed by a newline
	else if (number % 2 != 0)
		std::cout << "Odd\n";

	//return an error if neither of the previous statements are met
	else
		std::cout << "Error: unexpected value\n";
}
