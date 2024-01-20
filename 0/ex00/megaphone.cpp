/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 03:07:44 by lpeeters          #+#    #+#             */
/*   Updated: 2024/01/20 04:01:00 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cout
#include <cctype> // toupper

// simple program that takes inputs and writes them back to the output, converting any lowercase characters
int	main(int ac, char **av)
{
	// if no input was given, write a default text to the output
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);

	// loop through the given arguments, convert any lowercase characters and print them to the output, followed by a newline character
	while (*(++av))
		while (**av)
			std::cout << static_cast<char>(std::toupper(*(*av)++));
	std::cout << '\n';
}
