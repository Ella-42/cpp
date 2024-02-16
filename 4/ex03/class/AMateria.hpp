/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:39:40 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/16 22:51:51 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

// ICharacter
class ICharacter;

// Custom class: AMateria
class	AMateria
{
	public:
		// Constructor
		AMateria(void);

		// Constructor
		AMateria(std::string const& type);

		// Copy constructor
		AMateria(const AMateria& other);

		// Copy assignment operator overload
		AMateria& operator = (const AMateria& other);

		// Cloning
		virtual AMateria* clone(void) const = 0;

		// Getter
		std::string const& getType(void) const;

		// Use materia
		virtual void use(ICharacter& target);

		// Destructor
		virtual ~AMateria(void);

	protected:
		std::string type;
};

#endif
