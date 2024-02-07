/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:10:33 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/07 20:36:16 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

// Custom class: Weapon
class	Weapon
{
	public:
		// Constructor
		Weapon(std::string type);

		// Setter
		void setType(std::string new_type);

		// Getter
		const std::string& getType(void);

		// Destructor
		~Weapon(void);

	private:
		std::string type;
};

#endif
