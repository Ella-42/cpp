/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:38:07 by lpeeters          #+#    #+#             */
/*   Updated: 2024/01/19 22:39:46 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//simple program that takes an input and displays it back on the output
int	main(void)
{
	std::string	user_input; //define string

	std::cout << "in: "; //output request
	std::getline(std::cin, user_input); //request in and send it to string variable
	std::cout << "out: " << user_input << '\n'; //output the input
}
