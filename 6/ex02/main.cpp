/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:28:59 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/20 10:51:26 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output
#include <cstdlib> //srand
#include <ctime> //time

/* Classes */

#include "class/Base.hpp" //Base

// testing
int main(void)
{
	std::srand(std::time(NULL));

	Base *base1 = generate();
	Base *base2 = generate();
	Base *base3 = generate();

	std::cout << '\n';

	identify(base1);
	identify(base2);
	identify(base3);

	Base &base4 = *base1;
	Base &base5 = *base2;
	Base &base6 = *base3;

	std::cout << '\n';

	identify(base4);
	identify(base5);
	identify(base6);

	std::cout << '\n';

	Base *bad1 = NULL;
	Base bad2;

	identify(bad1);
	identify(bad2);

	std::cout << '\n';

	delete base1;
	delete base2;
	delete base3;
}
