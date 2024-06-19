/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:59:33 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/20 00:50:24 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output
#include <stdint.h> //uintptr_t

/* Structs */

#include "struct/Data.h" //Data
				  
/* Classes */

#include "class/Serializer.hpp" //Serializer

// testing
int	main(void)
{
	Data Original(0, "original");
	std::cout << '\n' << Original << "Memory address (Original): " << &Original << "\n\n";

	uintptr_t Serialized = Serializer::serialize(&Original);
	std::cout << "Raw data: " << Serialized << "\nMemory address (Serialized): " << &Serialized << "\n\n";

	std::cout << "Memory address (deserialize()): " << Serializer::deserialize(Serialized) << "\n\n";

	Data Deserialized_copy = *Serializer::deserialize(Serialized);
	std::cout << '\n' << Deserialized_copy << "Memory address (Deserialized copy): " << &Deserialized_copy << "\n\n";

	Data Deserialized_assignment_copy(-1, "");
	Deserialized_assignment_copy = *Serializer::deserialize(Serialized);
	std::cout << '\n' << Deserialized_assignment_copy << "Memory address (Deserialized assignment copy): " << &Deserialized_assignment_copy << "\n\n";
}
