/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:16:47 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/09 14:47:22 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/* Includes */

#include <fstream> //ifstream
#include <stdexcept> //runtime_error

// Open a file
void open_file(const char* input_file_name, std::ifstream& input_file)
{
	input_file.open(input_file_name);

	if (!input_file.is_open())
		throw (std::runtime_error("Could not open file"));
}
