/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:41:35 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/12 23:33:35 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

/* Includes */

# include <iostream> //input\output
# include <cstddef> //size_t
# include <algorithm> //min

// Print the array
template <typename container>
void print_array(const container& array);

// Instertion sorting algorithm 
template <typename container>
void sort_insert(container& array, size_t left, size_t right);

// Merging algorithm 
template <typename container>
void sort_merge(container& array, size_t left, size_t mid, size_t right);

// Merge instertion sorting algorithm 
template <typename container>
void sort_merge_insert(container& array);

// Template definition
# include "../template_definition/PmergeMe.tpp" //PmergeMe

#endif
