/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:22:26 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 20:56:42 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

// Custom class: ClapTrap
class	ClapTrap
{
	public:
		// Constructor
		ClapTrap(void);
		ClapTrap(std::string name);

		// Copy constructor
		ClapTrap(const ClapTrap& other);

		// Copy assignment operator overload
		ClapTrap& operator = (const ClapTrap& other);

		// Attack
		void attack(const std::string& target);

		// Take damage
		void takeDamage(unsigned int amount);

		// Heal
		void beRepaired(unsigned int amount);

		// Destructor
		~ClapTrap(void);

	protected:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;
};

#endif
