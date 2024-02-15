/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:03:58 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/15 20:42:47 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

// Custom class: Animal
class	Animal
{
	public:
		// Constructor
		Animal(void);

		// Copy constructor
		Animal(const Animal& other);

		// Copy assignment operator overload
		Animal& operator = (const Animal& other);

		// Getter
		virtual std::string getType(void) const;

		// Make a sound depending on animal type
		virtual void makeSound(void) const;

		// Destructor
		virtual ~Animal(void);

	protected:
		std::string type;

	private:
		;
};

#endif
