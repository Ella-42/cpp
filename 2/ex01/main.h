/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:53:57 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/14 15:18:13 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

/* Includes */

# include <iostream> //input\output
# include <cmath> //round
			 
/* Custom classes */

# include "class/Fixed.hpp" //Custom class: Fixed

/* Functions */

// Overload output redirection operator for objects of the 'Fixed' class
std::ostream& operator << (std::ostream& output, const Fixed& fixed_object);

#endif
