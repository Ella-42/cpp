/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:03:00 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/07 12:58:52 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string string_variable = "HI THIS IS BRAIN";
	std::string* stringPTR = &string_variable;
	std::string& stringREF = string_variable;

	std::cout << '\n';

	std::cout << &string_variable << '\n';
	std::cout << stringPTR << '\n';
	std::cout << &stringREF << '\n';

	std::cout << '\n';

	std::cout << string_variable << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';
}
