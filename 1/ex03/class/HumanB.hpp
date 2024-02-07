/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:17:47 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/07 17:58:34 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

// Custom class: HumanB
class	HumanB
{
	public:
		// Constructor
		HumanB(std::string name);

		// Setter
		void setWeapon(Weapon& weapon);

		// Attack
		void attack(void);

		// Destructor
		~HumanB(void);

	private:
		std::string name;
		Weapon* weapon;
};

#endif
