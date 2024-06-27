/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:27:50 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/27 23:38:52 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

// Template header
# include "../template/Array.hpp" //Array
			
// Constructor
template <typename type>
Array<type>::Array(void):
_size(0)
{
	std::cout << "Array: creating object\n";

	this->_array = new type[this->_size];
}

// Constructor
template <typename type>
Array<type>::Array(unsigned int n):
_size(n)
{
	std::cout << "Array: creating object\n";

	this->_array = new type[this->_size];

	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = type();
}

// Copy constructor
template <typename type>
Array<type>::Array(const Array& other):
_size(other._size)
{
	std::cout << "Array: copying object\n";

	this->_array = new type[this->_size];

	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
}

// Copy assignment operator overload
template <typename type>
Array<type>& Array<type>::operator= (const Array<type>& other)
{
	std::cout << "Array: copying object (assignment)\n";

	if (this != &other)
	{
		delete[] this->_array;

		this->_size = other._size;
		this->_array = new type[this->_size];

		for (size_t i = 0; i < this->_size; i++)
			this->_array[i] = other._array[i];
	}

	return (*this);
}

// operator overload
template <typename type>
type& Array<type>::operator[] (size_t i)
{
	if (i > this->_size - 1)
		throw (std::out_of_range("Out of bounds"));

	return (this->_array[i]);
}

// Getter
template <typename type>
size_t Array<type>::size(void) const
{
	return (this->_size);
}

// Destructor
template <typename type>
Array<type>::~Array(void)
{
	std::cout << "Array: destroying object\n";

	delete[] this->_array;
}

#endif
