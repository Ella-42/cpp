/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:33:56 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/09 17:09:18 by lpeeters         ###   ########.fr       */
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
const type& min(const type& x, const type& y);

// Return whichever variable has highest value
template <typename type>
const type& max(const type& x, const type& y);

// Template definition
# include "../template_definition/data.tpp" //data

#endif
