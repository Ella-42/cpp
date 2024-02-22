/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 00:06:51 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/22 19:27:13 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

// Custom class: Brain
class	Brain
{
	public:
		// Constructor
		Brain(void);

		// Copy constructor
		Brain(const Brain& other);

		// Copy assignment operator overload
		Brain& operator = (const Brain& other);

		// Setter
		void setThought(std::string idea, int i);

		// Getter
		const std::string* getThought(int i);

		// Destructor
		~Brain(void);

	private:
		std::string _ideas[100];
};

#endif
