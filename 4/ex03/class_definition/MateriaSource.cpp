/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:55:59 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/17 00:16:07 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

// Constructor
MateriaSource::MateriaSource(void) : IMateriaSource()
{
	std::cout << "MateriaSource: creating object\n";
	this->_index = 0;
	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
}

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource(other)
{
	std::cout << "MateriaSource: copying object\n";
	this->_index = other._index;
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
	for (int i = 0; i < this->_index; i++)
		if ((this->_memory[i])->getType() == type)
			return ((this->_memory[i])->clone());
	if (this->_index > 3)
		return (NULL);
	return ((this->_memory[this->_index])->clone());
}

// Learn materia
void MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_index > 3)
		return ;
	this->_memory[this->_index++] = materia;
}

// Destructor
MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource: destroying object\n";
	for (int i = 0; i < 4; i++)
		if (this->_memory[i])
			delete this->_memory[i];
}
