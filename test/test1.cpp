/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:07:50 by lpeeters          #+#    #+#             */
/*   Updated: 2024/01/11 16:41:14 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //in\out

//simple program that takes two numbers and returns the sum
int	main(void)
{
	std::cout << "Calculate the sum of two numbers.\nPlease enter two numbers: "; //output the request for inputs
	int	number_one, number_two; //define variables
	std::cin >> number_one >> number_two; //read from input and assign to variables
	std::cout << "Result: " << number_one + number_two << '\n'; //calculate and return the result to the output
}
