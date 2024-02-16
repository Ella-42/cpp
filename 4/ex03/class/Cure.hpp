/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:14:15 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 22:57:40 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

// Custom class: Cure
class	Cure : public AMateria
{
	public:
		// Constructor
		Cure(void);

		// Copy constructor
		Cure(const Cure& other);

		// Copy assignment operator overload
		Cure& operator = (const Cure& other);

		// Cloning
		AMateria* clone(void) const;

		// Use materia
		void use(ICharacter& target);

		// Destructor
		~Cure(void);
};

#endif
