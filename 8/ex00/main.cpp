/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:11:33 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/10 20:52:48 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output
#include <vector> //vector
#include <list> //list

#include "template/easyfind.hpp" //easyfind

// testing
int main(void)
{
	std::cout << "Vector:\n";

	std::vector<int> vector_number;

	vector_number.push_back(045);
	vector_number.push_back(-34646);
	vector_number.push_back(365);
	vector_number.push_back(4567);
	vector_number.push_back(42);

	try
	{
		std::vector<int>::const_iterator iterator1 = easyfind(vector_number, 42);
		std::cout << "Found: " << *iterator1 << '\n';
		std::vector<int>::const_iterator iterator2 = easyfind(vector_number, 365);
		std::cout << "Found: " << *iterator2 << '\n';
		std::vector<int>::const_iterator iterator3 = easyfind(vector_number, -34646);
		std::cout << "Found: " << *iterator3 << '\n';
		std::vector<int>::const_iterator iterator4 = easyfind(vector_number, 6);
		std::cout << "Found: " << *iterator4 << '\n';
		std::vector<int>::const_iterator iterator5 = easyfind(vector_number, 4567);
		std::cout << "Found: " << *iterator5 << '\n';
	}

	catch (const std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}

	std::cout << "\nList:\n";

	std::list<int> list_numbers;

	list_numbers.push_back(44);
	list_numbers.push_back(3466);
	list_numbers.push_back(-3446);
	list_numbers.push_back(3462);
	list_numbers.push_back(-5648);

	try
	{
		std::list<int>::const_iterator iterator1 = easyfind(list_numbers, -3446);
		std::cout << "Found: " << *iterator1 << '\n';
		std::list<int>::const_iterator iterator2 = easyfind(list_numbers, 44);
		std::cout << "Found: " << *iterator2 << '\n';
		std::list<int>::const_iterator iterator3 = easyfind(list_numbers, -5648);
		std::cout << "Found: " << *iterator3 << '\n';
		std::list<int>::const_iterator iterator4 = easyfind(list_numbers, 42);
		std::cout << "Found: " << *iterator4 << '\n';
		std::vector<int>::const_iterator iterator5 = easyfind(vector_number, 3462);
		std::cout << "Found: " << *iterator5 << '\n';
	}

	catch (const std::exception& error)
	{
		std::cerr << error.what() << '\n';
	}
}
