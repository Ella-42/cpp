/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:54:15 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/19 23:48:59 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class header
#include "../class/Serializer.hpp"

// Constructor
Serializer::Serializer(void)
{
	std::cout << "Serializer: creating object\n";
}

// Copy constructor
Serializer::Serializer(const Serializer& other)
{
	std::cout << "Serializer: copying object\n";

	(void)other;
}

// Copy assignment operator overload
Serializer& Serializer::operator= (const Serializer& other)
{
	std::cout << "Serializer: copying object (assignement)\n";

	(void)other;

	return (*this);
}

// Convert Data to raw bit values
uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

// Convert raw bit values back to Data
Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

// Destructor
Serializer::~Serializer(void)
{
	std::cout << "Serializer: destroying object\n";
}
