/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:56:21 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/17 00:19:35 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

// Custom class: Character
class	Character : public ICharacter
{
	public:
		// Constructor
		Character(void);
		Character(std::string name);

		// Copy constructor
		Character(const Character& other);

		// Copy assignment operator overload
		Character& operator = (const Character& other);

		// Getter
		std::string const& getName(void) const;

		// Equip
		void equip(AMateria* m) const;

		// Unequip
		void unequip(int idx);

		// Using
		void use(int idx, ICharacter& target);

		// Destructor
		~Character(void);

	private:
		std::string _name;
		short _index;
		AMateria* _inventory[4];
};

#endif
