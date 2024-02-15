/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:14:08 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/15 22:19:16 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

// Custom class: WrongCat
class	WrongCat : public WrongAnimal
{
	public:
		// Constructor
		WrongCat(void);

		// Copy constructor
		WrongCat(const WrongCat& other);

		// Copy assignment operator overload
		WrongCat& operator = (const WrongCat& other);

		// Make cat sounds
		void makeSound(void) const;

		// Destructor
		~WrongCat(void);

	protected:
		;

	private:
		;
};

#endif
