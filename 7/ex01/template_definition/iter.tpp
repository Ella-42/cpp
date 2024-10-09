/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:39:51 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/27 19:04:20 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_TPP
# define ITER_TPP

# include "../template/iter.hpp" //iter

// Run given function on each element of given array
template <typename type, typename function>
void iter(const type* array, size_t size, function f)
{
	 for (size_t i = 0; i < size; i++)
		f(array[i]);
}

// Print the value of incoming type
template <typename type>
void print_value(const type& value)
{
	std::cout << value << " ";
}

#endif
