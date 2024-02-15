/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:14:52 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/15 22:17:26 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

// Custom class: WrongAnimal
class	WrongAnimal
{
	public:
		// Constructor
		WrongAnimal(void);

		// Copy constructor
		WrongAnimal(const WrongAnimal& other);

		// Copy assignment operator overload
		WrongAnimal& operator = (const WrongAnimal& other);

		// Getter
		std::string getType(void) const;

		// Make a sound depending on animal type
		void makeSound(void) const;

		// Destructor
		~WrongAnimal(void);

	protected:
		std::string type;

	private:
		;
};

#endif
