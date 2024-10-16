/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:45:09 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/10 22:50:42 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output
#include <cstdlib> //srand
#include <ctime> //time

#include "class/Span.hpp" //Span

// testing
//int main(void)
//{
	//Span int_array(5);

	//try
	//{
		//std::cout << int_array.shortestSpan() << '\n';
	//}

	//catch (const std::exception& error)
	//{
		//std::cout << error.what() << '\n';
	//}

	//try
	//{
		//std::cout << int_array.longestSpan() << std::endl;
	//}

	//catch (const std::exception& error)
	//{
		//std::cout << error.what() << '\n';
	//}

	//int_array.addNumber(475);
	//int_array.addNumber(2147483647);
	//int_array.addNumber(-2147483647);
	//int_array.addNumber(654);
	//int_array.addNumber(984);

	//try
	//{
		//int_array.addNumber(0);
	//}

	//catch (const std::exception& error)
	//{
		//std::cout << error.what() << '\n';
	//}

	//try
	//{
		//std::cout << int_array.shortestSpan() << '\n';
		//std::cout << int_array.longestSpan() << '\n';
	//}

	//catch (const std::exception& error)
	//{
		//std::cout << error.what() << '\n';
	//}
//}

//int main(void)
//{
	//Span sp = Span(5);

	//sp.addNumber(6);
	//sp.addNumber(3);
	//sp.addNumber(17);
	//sp.addNumber(9);
	//sp.addNumber(11);

	//std::cout << sp.shortestSpan() << std::endl;
	//std::cout << sp.longestSpan() << std::endl;
//}

int main(void) {
    std::srand(std::time(NULL));

    Span sp(10);

    sp.generate();
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;

    Span GreatPesonality(1);

    GreatPesonality.addNumber(42);

    try {
        GreatPesonality.shortestSpan();
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "10 000 numbers" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Span sp1(10000);

	sp1.generate();
	std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
	std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "50 000 numbers" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Span sp2(50000);

	sp2.generate();
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	std::cout << "(this can take a while)" << std::endl;
	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "5 000 numbers" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Span sp3(5000);

	sp3.generate();
	std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
	std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "5 numbers" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Span sp4(5);

    sp4.generate();
    std::cout << "Longest span: " << sp4.longestSpan() << std::endl;
    std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
}
