/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:02:27 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/08 18:03:07 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

/* Includes */

# include <iostream> //input\output
# include <string> //string
# include <fstream> //in\out files
# include <sstream> //stringstream
			 
/* Functions */

// Search for a string within a string, replacing it with yet another string (stringception)
std::string search_and_replace(std::string& string, std::string string_to_replace, std::string string_to_replace_with);

// Read from an input file, replace strings and send the result to a new file
int	main(int ac, char **av);

#endif
