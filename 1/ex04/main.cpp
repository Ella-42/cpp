/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:59:37 by lpeeters          #+#    #+#             */
/*   Updated: 2024/02/08 18:06:20 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// Search for a string within a string, replacing it with yet another string (stringception)
std::string search_and_replace(std::string string, std::string to_replace, std::string replace_with)
{
	std::size_t position = 0;
	while ((position = string.find(to_replace, position)) != std::string::npos)
	{
		string.erase(position, to_replace.length());

		string.insert(position, replace_with);

		position += replace_with.length();
	}

	return (string);
}

// Read from an input file, replace strings and send the result to a new file
int	main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Error: invalid parameter count\nHint: filename, string 1, string 2\n", 1);

	std::ifstream input_file;
	std::string file_name = av[1];
	input_file.open(file_name.c_str());

	if (!input_file.is_open())
		return (std::cerr << "Error: opening file\n", 1);

	std::stringstream file_content;
	file_content << input_file.rdbuf();
	input_file.close();

	std::string new_file_content = search_and_replace(file_content.str(), av[2], av[3]);

	std::ofstream output_file;
	output_file.open((file_name + ".replace").c_str());

	if (!output_file.is_open())
		return (std::cerr << "Error: creating file\n", 1);

	output_file << new_file_content;

	output_file.close();
}
