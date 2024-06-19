/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:54:35 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/20 00:16:46 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

/* Includes */

# include <iostream> //input\output
# include <stdint.h> //uintptr_t

# include "../struct/Data.h" //Data

// Custom class: Serializer
class	Serializer
{
	public:
		// Convert Data to raw bit values
		static uintptr_t serialize(Data* ptr);

		// Convert raw bit values back to Data
		static Data* deserialize(uintptr_t raw);

	private:
		// Constructor
		Serializer(void);

		// Copy constructor
		Serializer(const Serializer& other);

		// Copy assignment operator overload
		Serializer& operator= (const Serializer& other);

		// Destructor
		~Serializer(void);
};

#endif
