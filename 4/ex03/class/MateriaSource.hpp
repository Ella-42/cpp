/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:56:17 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/19 22:43:42 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

// AMateria
class AMateria;

// Custom class: MateriaSource
class	MateriaSource : public IMateriaSource
{
	public:
		// Constructor
		MateriaSource(void);

		// Copy constructor
		MateriaSource(const MateriaSource& other);

		// Copy assignment operator overload
		MateriaSource& operator = (const MateriaSource& other);

		// Create materia
		AMateria* createMateria(std::string const& type);

		// Learn materia
		void learnMateria(AMateria*);

		// Destructor
		~MateriaSource(void);

	private:
		AMateria* _memory[4];
};

#endif
