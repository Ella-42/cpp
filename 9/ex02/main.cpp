/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:42:12 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/12 23:36:01 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output
#include <vector> //vector
#include <deque> //deque
#include <cstdlib> //atoi

#include "template/PmergeMe.hpp" //PmergeMe

# define TIME static_cast<double>(clock()) / CLOCKS_PER_SEC * 1000.0

// testing
int main(int ac, char** av)
{
	if (ac < 3)
		return (std::cerr << "Error: Incorrect number of arguments\n", 1);

	std::vector<int> vector;
	std::deque<int> deque;

	std::cout << "Original: ";
	for (int i = 1; i < ac; i++)
	{
		int number = std::atoi(av[i]);
		std::cout << number << ' ';
		vector.push_back(number);
		deque.push_back(number);
	}

	double clock_start;
	double clock_stop;

	clock_start = TIME;
	sort_merge_insert(vector);
	clock_stop = TIME;

	double vector_time_score = clock_stop - clock_start;

	clock_start = TIME;
	sort_merge_insert(deque);
	clock_stop = TIME;

	double deque_time_score = clock_stop - clock_start;

	std::cout << "\nSorted:   ";
	print_array(vector);

	std::cout << "Vector[" << vector.size() << "]: " << vector_time_score << " ms\n";
	std::cout << "Deque[" << deque.size() << "]:  " << deque_time_score << " ms\n";
}
