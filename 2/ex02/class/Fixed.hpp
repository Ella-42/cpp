/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:54:43 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 16:24:03 by lpeeters         ###   ########.fr       */
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

		// Convert to floating-point
		float toFloat(void) const;

		// Convert to integer
		int toInt(void) const;

		// > operator overload
		bool operator > (const Fixed& other) const;

		// < operator overload
		bool operator < (const Fixed& other) const;

		// >= operator overload
		bool operator >= (const Fixed& other) const;

		// <= operator overload
		bool operator <= (const Fixed& other) const;

		// == operator overload
		bool operator == (const Fixed& other) const;

		// != operator overload
		bool operator != (const Fixed& other) const;

		// + operator overload
		Fixed operator + (const Fixed& other) const;

		// - operator overload
		Fixed operator - (const Fixed& other) const;

		// * operator overload
		Fixed operator * (const Fixed& other) const;

		// / operator overload
		Fixed operator / (const Fixed& other) const;

		// ++ operator overload (pre)
		Fixed& operator ++ (void);

		// -- operator overload (pre)
		Fixed& operator -- (void);

		// ++ operator overload (post)
		Fixed operator ++ (int);

		// -- operator overload (post)
		Fixed operator -- (int);

		// return smallest value of two
		static Fixed& min(Fixed& value_one, Fixed& value_two);

		// return smallest value of two
		static const Fixed& min(const Fixed& value_one, const Fixed& value_two);

		// return greatest value of two
		static Fixed& max(Fixed& value_one, Fixed& value_two);

		// return greatest value of two
		static const Fixed& max(const Fixed& value_one, const Fixed& value_two);

		// Destructor
		~Fixed(void);

	private:
		int _fixed_point_number;
		static const int _fractional_bits = 8;
};

#endif
