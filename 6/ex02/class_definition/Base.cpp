/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:48:21 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/20 10:54:21 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class header
#include "../class/Base.hpp"

// Defined here to prevent circular inclusion
#include "../class/A.hpp" //A
#include "../class/B.hpp" //B
#include "../class/C.hpp" //C

/* Public */

// Destructor
Base::~Base(void)
{
	std::cout << "Base: destroying object\n";
}

/* Functions */

Base* generate(void)
{
	int	odds = std::rand() % 3;

	if (odds == 0)
		return (std::cout << "A\n", new A);

	else if (odds == 1)
		return (std::cout << "B\n", new B);

	else
		return (std::cout << "C\n", new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";

	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";

	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";

	else
		std::cout << "D?!?!?!?!?!?!?!?!?!?\n";
}

void identify(Base& p)
{
	try
	{
		return ((void)dynamic_cast<A&>(p), std::cout << "A\n", void());
	}

	catch (std::exception& error) {}

	try
	{
		return ((void)dynamic_cast<B&>(p), std::cout << "B\n", void());
	}

	catch (std::exception& error) {}

	try
	{
		return ((void)dynamic_cast<C&>(p), std::cout << "C\n", void());
	}

	catch (std::exception& error) {}

	std::cout << "D?!?!?!?!?!?!?!?!?!?\n";
}
