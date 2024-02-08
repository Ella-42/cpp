/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:27:30 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/08 21:38:58 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

// Custom class: harl
class	Harl
{
	public:
		// Constructor
		Harl(void);

		// Complain
		void complain(std::string level);

		// Destructor
		~Harl(void);

	private:
		// Level
		void debug(void);

		// Level
		void info(void);

		// Level
		void warning(void);

		// Level
		void error(void);
};

#endif
