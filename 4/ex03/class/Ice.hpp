/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:13:40 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 22:52:35 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

// ICharacter
class ICharacter;

// AMateria
class AMateria;

// Custom class: Ice
class	Ice : public AMateria
{
	public:
		// Constructor
		Ice(void);

		// Copy constructor
		Ice(const Ice& other);

		// Copy assignment operator overload
		Ice& operator = (const Ice& other);

		// Cloning
		AMateria* clone(void) const;

		// Use materia
		void use(ICharacter& target);

		// Destructor
		~Ice(void);
};

#endif
