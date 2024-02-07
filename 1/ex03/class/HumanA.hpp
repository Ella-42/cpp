/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:17:35 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/07 18:12:39 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

// Custom class: HumanA
class	HumanA
{
	public:
		// Constructor
		HumanA(std::string name, Weapon& weapon_type);

		// Attack
		void attack(void);

		// Destructor
		~HumanA(void);

	private:
		std::string name;
		Weapon* weapon;
};

#endif
