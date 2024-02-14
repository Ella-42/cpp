/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:43:54 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 21:07:40 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

// Custom class: ScavTrap
class	ScavTrap : public ClapTrap
{
	public:
		// Constructor
		ScavTrap(void);
		ScavTrap(std::string name);

		// Copy constructor
		ScavTrap(const ScavTrap& other);

		// Copy assignment operator overload
		ScavTrap& operator = (const ScavTrap& other);

		// Turn on gate keeper mode
		void guardGate(void);

		// Destructor
		~ScavTrap(void);

	private:
		bool _gate_keeper_mode;
};

#endif
