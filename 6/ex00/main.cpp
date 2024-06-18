/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:38:09 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/18 18:53:01 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output

/* Classes */

#include "class/ScalarConverter.hpp" //ScalarConverter
				  
// testing
int	main(int ac, char **av)
{
	if (ac < 2)
		return (std::cerr << "I demand a type!\n", 1);

	else if (ac > 2)
		return (std::cerr << "Only one!\n", 1);

	ScalarConverter::convert(av[1]);
}
