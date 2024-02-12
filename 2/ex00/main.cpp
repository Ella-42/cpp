/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:54:15 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/12 21:10:54 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing the printing of operations performed on objects for debugging purposes
int	main(void)
{
	std::cout << "\nTESTS\n\n";

	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << '\n';
	// Something I addded myself to test the setter message as well
	b.setRawBits(1);
	std::cout << b.getRawBits() << '\n';
	std::cout << c.getRawBits() << '\n';
}
