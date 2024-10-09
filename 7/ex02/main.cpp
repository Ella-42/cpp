/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:55:06 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/09 18:40:00 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output

#include "template/Array.hpp" //Array

// testing
//int main(void)
//{
	//int* a = new int();
	//std::cout << *a << "\n\n";
	//delete a;

	//Array<int> int_array1;
	//Array<int> int_array2(5);
//}

int main(void) {
	int * a = new int();
	std::cout << *a << std::endl;
	delete a;
	
	std::cout << "INT ARRAY" << std::endl;
	Array<int> arr1((unsigned int)10);
	Array<int> arr2;

	arr2 = arr1;

	unsigned int size1 = arr1.size();
	unsigned int size2 = arr2.size();
	std::cout << arr1.size() << std::endl;
	std::cout << arr2.size() << std::endl;
	
	for (unsigned int i = 0; i < size1; i++)
		arr1[i] = 42;
	std::cout << std::endl;

	for (unsigned int i = 0; i < size1; i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;

	for (unsigned int i = 0; i < size2; i++)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;

	std::cout << "CHAR ARRAY" << std::endl;
	Array<char> arr3((unsigned int)10);
	Array<char> arr4;

	arr4 = arr3;

	unsigned int size3 = arr3.size();
	unsigned int size4 = arr4.size();
	std::cout << arr3.size() << std::endl;
	std::cout << arr4.size() << std::endl;
	
	for (unsigned int i = 0; i < size3; i++)
		arr3[i] = 'A';
	std::cout << std::endl;

	for (unsigned int i = 0; i < size3; i++)
		std::cout << arr3[i] << " ";
	std::cout << std::endl;

	for (unsigned int i = 0; i < size4; i++)
		std::cout << arr4[i] << " ";
	std::cout << std::endl;

	std::cout << "EXCEPTIONS" << std::endl;

	try {
		arr1[20];
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		arr3[50];
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
