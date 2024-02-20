/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:54:15 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/20 22:19:43 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing the printing of operations performed on objects for debugging purposes
//int	main(void)
//{
	//Fixed a;
	//Fixed const b(Fixed(5.05f) * Fixed(2));
	//std::cout << a << std::endl;
	//std::cout << ++a << std::endl;
	//std::cout << a << std::endl;
	//std::cout << a++ << std::endl;
	//std::cout << a << std::endl;
	//std::cout << b << std::endl;
	//std::cout << Fixed::max(a, b) << std::endl;
//}

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed e(4321.1234f);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;

	// Overloaded operators
	std::cout << "c > b: " << (c > b) << std::endl;
	std::cout << "c < b: " << (c < b) << std::endl;
	std::cout << "c >= b: " << (c >= b) << std::endl;
	std::cout << "c <= b: " << (c <= b) << std::endl;
	std::cout << "c == b: " << (c == b) << std::endl;
	std::cout << "c != b: " << (c != b) << std::endl;

	// Arithmetic operations
	Fixed result;
	result = a + b;
	std::cout << "a + b: " << result << std::endl;
	result = a - b;
	std::cout << "a - b: " << result << std::endl;
	result = a * b;
	std::cout << "a * b: " << result << std::endl;
	result = a / b;
	std::cout << "a / b: " << result << std::endl;

	// Note: number is printed in form X.XX so demonstrating this is pretty useless...
	//// Post-increment
	//std::cout << "e before e++: " << e << std::endl; // Shows 'e' before increment
	//e++;
	//std::cout << "e after e++: " << e << std::endl; // Shows 'e' after increment
	
	//// Pre-increment
	//std::cout << "++e: " << ++e << std::endl; // Shows 'e' after increment
	
	//// Post-decrement
	//std::cout << "e before e--: " << e << std::endl; // Shows 'e' before decrement
	//e--;
	//std::cout << "e after e--: " << e << std::endl; // Shows 'e' after decrement
	
	//// Pre-decrement
	//std::cout << "--e: " << --e << std::endl; // Shows 'e' after decrement

	// Min and max
	std::cout << "Min of e and d: " << Fixed::min(e, d) << std::endl;
	std::cout << "Max of e and d: " << Fixed::max(e, d) << std::endl;
}
