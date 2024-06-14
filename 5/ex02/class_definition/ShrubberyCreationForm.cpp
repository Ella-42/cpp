/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:44:37 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/14 17:08:03 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/ShrubberyCreationForm.hpp"

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm: creating object\n";
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
AForm(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm: copying object\n";
}

// Copy assignment operator overload
ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm: copying object (assignement)\n";

	if (this != &other)
		this->_target = other._target;

	return (*this);
}

// Execute form
void ShrubberyCreationForm::execute_form(void) const
{
	std::string file_name = this->_target + "_shrubbery";

	std::ofstream output_file;
	output_file.exceptions(std::ofstream::badbit | std::ofstream::failbit);

	try
	{
		output_file.open(file_name.c_str());
		output_file <<
		"                                                    .          \n"
		"                                         .         ;           \n"
		"            .              .              ;%     ;;            \n"
		"              ,           ,                :;%  %;             \n"
		"               :         ;                   :;%;'     .,      \n"
		"      ,.        %;     %;            ;        %;'    ,;        \n"
		"        ;       ;%;  %%;        ,     %;    ;%;    ,%'         \n"
		"         %;       %;%;      ,  ;       %;  ;%;   ,%;'          \n"
		"          ;%;      %;        ;%;        % ;%;  ,%;'            \n"
		"           `%;.     ;%;     %;'         `;%%;.%;'              \n"
		"            `:;%.    ;%%. %@;        %; ;@%;%'                 \n"
		"               `:%;.  :;bd%;          %;@%;'                   \n"
		"                 `@%:.  :;%.         ;@@%;'                    \n"
		"                   `@%.  `;@%.      ;@@%;                      \n"
		"                     `@%%. `@%%    ;@@%;                       \n"
		"                       ;@%. :@%%  %@@%;                        \n"
		"                         %@bd%%%bd%%:;                         \n"
		"                           #@%%%%%:;;                          \n"
		"                           %@@%%%::;                           \n"
		"                           %@@@%(o);  . '                      \n"
		"                           %@@@o%;:(.,'                        \n"
		"                       `.. %@@@o%::;                           \n"
		"                          `)@@@o%::;                           \n"
		"                           %@@(o)::;                           \n"
		"                          .%@@@@%::;                           \n"
		"                          ;%@@@@%::;.                          \n"
		"                         ;%@@@@%%:;;;.                         \n"
		"                     ...;%@@@@@%%:;;;;,..                      \n";
		output_file.close();                                            
	}                                                                   
                                                                        
	catch (std::ofstream::failure& error)                               
	{
		std::cerr << "Error writing to file '" << file_name << "': " << error.what() << '\n';
	}
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm: destroying object\n";
}
