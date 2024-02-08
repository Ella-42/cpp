/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:30:11 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/08 22:12:47 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Harl::Harl(void)
{
	std::cout << "created object: Harl\n";
}

// Complain
void Harl::complain(std::string level)
{
	const std::string complain_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*Function[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for (int i = 0; i < 4; i++)
		if (level == complain_level[i])
			return ((this->*Function[i])(), void());
}

// Destructor
Harl::~Harl(void)
{
	std::cout << "destroyed object: Harl\n";
}

// Level
void Harl::debug(void)
{
	std::cout << "reached debug level\n";
}

// Level
void Harl::info(void)
{
	std::cout << "reached info level\n";
}

// Level
void Harl::warning(void)
{
	std::cout << "reached warning level\n";
}

// Level
void Harl::error(void)
{
	std::cout << "reached error level\n";
}
