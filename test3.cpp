/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:40:16 by lpeeters          #+#    #+#             */
/*   Updated: 2024/01/11 20:59:55 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>

//convert a string array to a vector of integers
std::vector<int> convert_string_array_to_number_vector(char **input)
{
	//define stringstream object for string to number convertion
	std::stringstream string_to_number;

	//define integer to temporarily store numbers
	int number;

	//define vector of integers to store numbers and to be returned
	std::vector<int> numbers;

	//loop through the input of type string array (skipping the first argument, as this is the program itself)
	while (*(++input))
	{
		//send the current input string into the stringstream object
		string_to_number << *input;

		//extract the converted string, now a number to a temporary integer
		string_to_number >> number;

		//store the converted number into the vector of integers by adding it at the back
		numbers.push_back(number);

		//reset the stringstream object
		string_to_number.clear();
	}

	//return the number vector
	return (numbers);
}

//find the biggest number among a vector of integers and return it
int find_biggest_number(const std::vector<int> numbers, int ac)
{
	//handle errors, it should not be possible for the number vector to be empty at this point
	if (numbers.empty())
	{
		//print the appropriate error to the output
		std::cout << "Error: vector failure\n";
		//exit the program with failure
		std::exit(EXIT_FAILURE);
	}

	//start by assigning the current number to a variable of type integer as the biggest number
	int biggest_number = numbers[0];

	//loop through the number vector, using an iterator of type size_t
	for (size_t iterator = 1; iterator < static_cast<size_t>(ac - 1); ++iterator)
	{
		//compare the current number with the previous number, if it is bigger, overwrite biggest_number to this new value
		if (numbers[iterator] > biggest_number)
			biggest_number = numbers[iterator];
	}

	//return the biggest number
	return (biggest_number);
}

//program that takes an input directly from the argument vector and prints the biggest number
int main(int ac, char **av)
{
	//simple error handling for an invalid amount of inputs
	if (ac < 3)
		return (std::cout << "Error: invalid amount of arguments\nPlease specify at least two numbers!\n", 1);

	//convert inputs of numbers of type string array to type integer vector
	std::vector<int> numbers = convert_string_array_to_number_vector(av);

	//find the biggest number in the number vector
	int biggest_number = find_biggest_number(numbers, ac);

	//print the biggest number to the output
	std::cout << "The biggest number was: " << biggest_number << "\n";
}
