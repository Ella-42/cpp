/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:54:43 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/13 14:07:40 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// Custom class: Fixed
class	Fixed
{
	public:
		// Constructor
		Fixed(void);
		Fixed(const int);
		Fixed(const float);

		// Copy constructor
		Fixed(const Fixed& other);

		// Copy assignment operator overload
		Fixed& operator = (const Fixed& other);

		// Setter
		void setRawBits(int const raw);

		// Getter
		int getRawBits(void) const;

		// Destructor
		~Fixed(void);

	private:
		int _fixed_point_number;
		static const int _fractional_bits = 8;
};

#endif
