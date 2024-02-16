/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:56:19 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 23:34:35 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

// AMateria
class AMateria;

// Custom class: IMateriaSource
class	IMateriaSource
{
	public:
		// Create materia
		virtual AMateria* createMateria(std::string const& type) = 0;

		// Learn materia
		virtual void learnMateria(AMateria*) = 0;

		// Destructor
		virtual ~IMateriaSource(void) {}
};

#endif
