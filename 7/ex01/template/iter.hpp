/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:40:04 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/09 17:44:59 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

/* Includes */

# include <cstddef> //size_t
# include <iostream> //input\output

// Run given function on each element of given array
template <typename type, typename function>
void iter(const type* array, size_t size, function f);

// Print the value of incoming type
template <typename type>
void print_value(const type& value);

// Template definition
# include "../template_definition/iter.tpp" //iter

#endif
