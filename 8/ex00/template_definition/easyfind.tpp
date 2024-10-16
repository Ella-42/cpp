/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:45:17 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/28 18:09:09 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

// Template header
# include "../template/easyfind.hpp" //easyfind

// Find first instance of a given integer value in a given container
template <typename type>
typename type::const_iterator easyfind(const type& hay, int needle)
{
	typename type::const_iterator found = std::find(hay.begin(), hay.end(), needle);

	if (found != hay.end())
		return (found);

	// Can't use std::to_string() from C++11? Need a string but with less overhead? No problem ;)
	throw (std::runtime_error("Could not find " + (static_cast<std::ostringstream&>(std::ostringstream() << needle)).str()));
}

#endif
