/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:52:06 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/20 20:05:35 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// Custom class: Zombie
class	Zombie
{
	public:
		// Constructor
		Zombie(void);

		// Set name of zombie
		void	set_zombie_name(std::string name);

		// Zombie announces itself
		void	announce(void);

		// Destructor
		~Zombie(void);

	private:
		std::string name;
};

#endif
