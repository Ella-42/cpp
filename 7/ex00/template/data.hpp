/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:33:56 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/27 21:17:17 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

/* Includes */

// Swap values of two variables
template <typename type>
void swap(type& x, type& y);

// Return whichever variable has lowest value
template <typename type>
type min(type& x, type& y);

// Return whichever variable has highest value
template <typename type>
type max(type& x, type& y);

// Template definition
# include "../template_definition/data.tpp" //data

#endif
