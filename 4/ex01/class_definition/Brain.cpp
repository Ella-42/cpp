/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 00:06:08 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 00:22:00 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
Brain::Brain(void)
{
	std::cout << "Brain: creating object\n";
}

// Copy constructor
Brain::Brain(const Brain& other)
{
	std::cout << "Brain: copying object\n";
	*this = other;
}

// Copy assignment operator overload
Brain& Brain::operator = (const Brain& other)
{
	std::cout << "Brain: copying object (assignement)\n";
	if (this != &other)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	return (*this);
}

// Destructor
Brain::~Brain(void)
{
	std::cout << "Brain: destroying object\n";
}
