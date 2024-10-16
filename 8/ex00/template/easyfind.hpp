/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:48:45 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/10 22:07:13 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

/* Includes */

# include <algorithm> //find
# include <stdexcept> //runtime_error
# include <sstream> //stringstream

// Find first instance of a given integer value in a given container
template <typename type>
typename type::const_iterator easyfind(const type& hay, int needle);

// Template definition
# include "../template_definition/easyfind.tpp" //easyfind

#endif
