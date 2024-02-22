/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:08:47 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/22 20:13:16 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

// Custom class: Cat
class	Cat : public Animal
{
	public:
		// Constructor
		Cat(void);

		// Copy constructor
		Cat(const Cat& other);

		// Copy assignment operator overload
		Cat& operator = (const Cat& other);

		// Make cat sounds
		void makeSound(void) const;

		// Setter
		void setIdea(std::string idea, int i);

		// Getter
		std::string getIdea(int i) const;
		Brain* getBrainAddress(void) const;

		// Destructor
		~Cat(void);

	private:
		Brain* _brain;
};

#endif
