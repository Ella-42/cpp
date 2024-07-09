/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:15:35 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/08 16:06:56 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

/* Includes */

# include <iostream> //input\output
# include <stack> //stack
# include <iterator> //iterator

// 
template <typename type>
class MutantStack:
public std::stack<type>
{
	public:
		// Constructor
		MutantStack(void);

		// Copy constructor
		MutantStack(const MutantStack& other);

		// Copy assignment operator overload
		MutantStack& operator= (const MutantStack& other);

		// Alias for underlying container's iterator type
		typedef typename std::stack<type>::container_type::iterator iterator;

		// Iterator to beginning of underlying container
		iterator begin(void);

		// Iterator to end of underlying container
		iterator end(void);

		// Destructor
		~MutantStack(void);
};

// Template definition
# include "../template_definition/MutantStack.tpp" //MutantStack
	
#endif
