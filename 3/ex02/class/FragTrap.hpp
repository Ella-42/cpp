/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:06:49 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/21 22:00:51 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// Custom class: FragTrap
class	FragTrap : public ClapTrap
{
	public:
		// Constructor
		FragTrap(void);
		FragTrap(std::string name);

		// Copy constructor
		FragTrap(const FragTrap& other);

		// Copy assignment operator overload
		FragTrap& operator = (const FragTrap& other);

		// Literally high five's... ig...
		void highFivesGuys(void);

		// Destructor
		~FragTrap(void);
};

#endif
