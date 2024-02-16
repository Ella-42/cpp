/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 00:06:08 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 17:53:33 by lpeeters         ###   ########.fr       */
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

// Setter
void Brain::setThought(std::string idea, int i)
{
	if (i > 100)
		return (std::cerr << "Error: access violation\n", void());
	this->_ideas[i] = idea;
}

// Getter
const std::string* Brain::getThought(int i)
{
	if (i > 100)
		return (std::cerr << "Error: access violation\n", static_cast<const std::string*>(NULL));
	return (&(this->_ideas[i]));
}
// Destructor
Brain::~Brain(void)
{
	std::cout << "Brain: destroying object\n";
}
