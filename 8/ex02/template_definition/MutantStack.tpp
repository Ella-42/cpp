/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:15:05 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/08 16:07:22 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

// Template header
# include "../template/MutantStack.hpp" //MutantStack
			
// Constructor
template <typename type>
MutantStack<type>::MutantStack(void):
std::stack<type>()
{
	std::cout << "MutantStack: Creating object\n";
}

// Copy constructor
template <typename type>
MutantStack<type>::MutantStack(const MutantStack& other):
std::stack<type>(other)
{
	std::cout << "MutantStack: Copying object\n";
}

// Copy assignment operator overload
template <typename type>
MutantStack<type>& MutantStack<type>::operator= (const MutantStack& other)
{
	std::cout << "MutantStack: Copying object (assignment)\n";

	if (this != &other)
		this->c = other.c;

	return (*this);
}

// Iterator to beginning of underlying container
template <typename type>
typename MutantStack<type>::iterator MutantStack<type>::begin(void)
{
	return (this->c.begin());
}

// Iterator to end of underlying container
template <typename type>
typename MutantStack<type>::iterator MutantStack<type>::end(void)
{
	return (this->c.end());
}

// Destructor
template <typename type>
MutantStack<type>::~MutantStack(void)
{
	std::cout << "MutantStack: Destroying object\n";
}

#endif
