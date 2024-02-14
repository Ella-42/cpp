/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:54:15 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 17:28:12 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing the printing of operations performed on objects for debugging purposes
int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
}

//int main(void)
//{
    //Fixed a;
    //Fixed const b(10);
    //Fixed const c(42.42f);
    //Fixed const d(b);

    //a = Fixed(1234.4321f);

    //std::cout << "a is " << a << std::endl;
    //std::cout << "b is " << b << std::endl;
    //std::cout << "c is " << c << std::endl;
    //std::cout << "d is " << d << std::endl;

    //std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    //std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    //std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    //std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    //// Example using overloaded operators
    //std::cout << "c > b: " << (c > b) << std::endl;
    //std::cout << "c < b: " << (c < b) << std::endl;
    //std::cout << "c >= b: " << (c >= b) << std::endl;
    //std::cout << "c <= b: " << (c <= b) << std::endl;
    //std::cout << "c == b: " << (c == b) << std::endl;
    //std::cout << "c != b: " << (c != b) << std::endl;

    //// Arithmetic operations
    //Fixed result;
    //result = a + b;
    //std::cout << "a + b: " << result << std::endl;
    //result = a - b;
    //std::cout << "a - b: " << result << std::endl;
    //result = a * b;
    //std::cout << "a * b: " << result << std::endl;
    //result = a / b;
    //std::cout << "a / b: " << result << std::endl;

    //// Increment and decrement operators
    //std::cout << "a++: " << a++ << std::endl;
    //std::cout << "++a: " << ++a << std::endl;
    //std::cout << "a--: " << a-- << std::endl;
    //std::cout << "--a: " << --a << std::endl;

    //// Min and max
    //std::cout << "Min of a and b: " << Fixed::min(a, b) << std::endl;
    //std::cout << "Max of a and b: " << Fixed::max(a, b) << std::endl;
//}
