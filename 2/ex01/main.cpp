/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:54:15 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 00:22:56 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Testing the printing of operations performed on objects for debugging purposes
int	main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	//std::cout << "a is " << a << std::endl;
	//std::cout << "b is " << b << std::endl;
	//std::cout << "c is " << c << std::endl;
	//std::cout << "d is " << d << std::endl;
	//std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	//std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	//std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	//std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}
