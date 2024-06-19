/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:57:01 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/19 22:16:20 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

/* Includes */

# include <iostream> //input\output
# include <ostream> //ostream
# include <string> //string

// Data data structure
struct Data
{
	public:
		// Attributes
		int id;
		std::string	value;

		// Constructor
		Data(int id, std::string value);

		// Copy constructor
		Data(const Data& other);

		// Copy assignment operator overload
		Data& operator= (const Data& other);

		// Destructor
		~Data(void);
};

// Output stream overload to allow easier object information printing
std::ostream& operator<< (std::ostream& output_stream, Data& object);

#endif
