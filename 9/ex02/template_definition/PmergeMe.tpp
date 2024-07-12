/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:41:20 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/12 22:56:31 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_TPP
# define PMERGEME_TPP

// Template header
# include "../template/PmergeMe.hpp" //PmergeMe

// Print the array
template <typename container>
void print_array(const container& array)
{
	for (typename container::const_iterator iterator = array.begin(); iterator != array.end(); iterator++)
		std::cout << *iterator << ' ';
	std::cout << '\n';
}

// Instertion sorting algorithm 
template <typename container>
void sort_insert(container& array, size_t left, size_t right)
{
	for (size_t i = left + 1; i < right; ++i)
	{
		typename container::value_type key = array[i];

		size_t j = i + 1;
		while (--j > left && array[j - 1] > array[i])
			array[j] = array[j - 1];

		array[j] = key;
	}
}

// Merging algorithm 
template <typename container>
void sort_merge(container& array, size_t left, size_t mid, size_t right)
{
	typename container::value_type* merged = new typename container::value_type[right - left];

	size_t i = left, j = mid, k = 0;

	while (i < mid && j < right)
	{
		if (array[i] <= array[j])
			merged[k++] = array[i++];
		else
			merged[k++] = array[j++];
	}

	while (i < mid)
		merged[k++] = array[i++];
	while (j < right)
		merged[k++] = array[j++];

	for (size_t l = 0; l < k; ++l)
		array[left + l] = merged[l];

	delete[] merged;
}

// Merge instertion sorting algorithm
template <typename container>
void sort_merge_insert(container& array)
{
	for (size_t i = 0; i < array.size(); i += 2)
		sort_insert<container>(array, i, std::min(i + 2, array.size()));

	for (size_t size = 2; size < array.size(); size *= 2)
		for (size_t left = 0; left < array.size(); left += 2 * size)
			sort_merge<container>(array, left, std::min(left + size, array.size()), std::min(left + 2 * size, array.size()));
}

#endif
