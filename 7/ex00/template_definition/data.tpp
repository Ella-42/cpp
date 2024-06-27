/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:33:46 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/27 21:17:10 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_TPP
# define DATA_TPP

// Swap values of two variables
template <typename type>
void swap(type& x, type& y)
{
	type swap = x;
	x = y;
	y = swap;
}

// Return whichever variable has lowest value
template <typename type>
type min(type& x, type& y)
{
	return (x < y ? x : y);
}

// Return whichever variable has highest value
template <typename type>
type max(type& x, type& y)
{
	return (x > y ? x : y);
}

#endif
