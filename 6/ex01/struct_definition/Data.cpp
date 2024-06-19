/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 21:21:43 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/20 00:13:39 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Class header
#include "../struct/Data.h"

// Constructor
Data::Data(int id, std::string value):
id(id), value(value)
{
	std::cout << "Data: creating object\n";
}

// Copy constructor
Data::Data(const Data& other):
id(other.id), value(other.value)
{
	std::cout << "Data: copying object\n";
}

// Copy assignment operator overload
Data& Data::operator= (const Data& other)
{
	std::cout << "Data: copying object (assignement)\n";

	if (this != &other)
	{
		this->id = other.id;
		this->value = other.value;
	}

	return (*this);
}

// Destructor
Data::~Data(void)
{
	std::cout << "Data: destroying object\n";
}

// Output stream overload to allow easier object information printing
std::ostream& operator<< (std::ostream& output_stream, Data& object)
{
	output_stream << "Data: ID: " << object.id << ", Value: " << object.value << '\n';

	return (output_stream);
}
