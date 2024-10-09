/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:28:01 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/09 18:29:09 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

/* Includes */

# include <iostream> //input\output
# include <stdint.h> //size_t

// Custom class template: Array
template <typename type>
class Array
{
	public:
		// Constructor
		Array(void);
		Array(unsigned int n);

		// Copy constructor
		Array(const Array& other);

		// Copy assignment operator overload
		Array& operator= (const Array& other);

		// Subscript operator overload
		type& operator[] (size_t i);

		// Getter
		size_t size(void) const;

		// Destructor
		~Array(void);

	private:
		// Attributes
		type* _array;
		size_t _size;
};

// Template definition
# include "../template_definition/Array.tpp" //Array

#endif
