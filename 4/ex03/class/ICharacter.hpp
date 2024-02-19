/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:56:23 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 12:30:45 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

// AMateria
class AMateria;

// Custom class: ICharacter
class	ICharacter
{
	public:
		// Getter
		virtual std::string const& getName(void) const = 0;

		// Equip
		virtual void equip(AMateria* m) = 0;

		// Unequip
		virtual void unequip(int idx) = 0;

		// Using
		virtual void use(int idx, ICharacter& target) = 0;

		// Destructor
		virtual ~ICharacter(void) {}
};

#endif
