/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:52:03 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/27 16:58:40 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output
#include <string> //string

#include "template/iter.hpp" //iter

// testing
int main(void)
{
	int int_array[] = {1, 2, 3};
	std::cout << "int array: ";
	::iter(int_array, 3, ::print_value<int>);

	std::string string_array[] = {"value 1", "value 2", "value 3"};
	std::cout << "\nstring array: ";
	::iter(string_array, 3, ::print_value<std::string>);
	std::cout << '\n';
}
