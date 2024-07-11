/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:16:10 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/09 17:49:56 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/* Includes */

#include <iostream> //input\output
#include <fstream> //ifstream
#include <stdexcept> //runtime_error

/* Functions */

// Open a file
void open_file(const char* input_file_name, std::ifstream& input_file);
