/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:08:38 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 16:10:35 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

// Custom class: Dog
class	Dog : public Animal
{
	public:
		// Constructor
		Dog(void);

		// Copy constructor
		Dog(const Dog& other);

		// Copy assignment operator overload
		Dog& operator = (const Dog& other);

		// Make dog sounds
		void makeSound(void) const;

		// Destructor
		~Dog(void);

	protected:
		;

	private:
		;
};

#endif
