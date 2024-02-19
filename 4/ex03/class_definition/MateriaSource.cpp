/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:55:59 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 23:11:02 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
MateriaSource::MateriaSource(void) : IMateriaSource()
{
	std::cout << "MateriaSource: creating object\n";
	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
}

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource(other)
{
	std::cout << "MateriaSource: copying object\n";
	for (int i = 0; i < 4; i++)
		if (other._memory[i])
			this->_memory[i] = (other._memory[i])->clone();
}

// Copy assignment operator overload
MateriaSource& MateriaSource::operator = (const MateriaSource& other)
{
	std::cout << "MateriaSource: copying object (assignement)\n";
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_memory[i])
				delete this->_memory[i];
			if (other._memory[i])
				this->_memory[i] = (other._memory[i])->clone();
		}
	}
	return (*this);
}

// Create materia
AMateria* MateriaSource::createMateria(std::string const& type)
{
	int i = 0;
	while (this->_memory[i] && (this->_memory[i])->getType() != type && i < 4)
		i++;
	if (i < 4 && this->_memory[i])
		return ((this->_memory[i])->clone());
	return (NULL);
}

// Learn materia
void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while (this->_memory[i] && i < 4)
		i++;
	if (i < 4)
		this->_memory[i] = materia;
}

// Destructor
MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource: destroying object\n";
	for (int i = 0; i < 4; i++)
		if (this->_memory[i])
			delete this->_memory[i];
}
