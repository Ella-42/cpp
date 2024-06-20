/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:47:03 by lpeeters          #+#    #+#             */
/*   Updated: 2024/06/20 10:11:57 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/* Includes */

#include <iostream> //input\output
#include <cstdlib> //rand

// Custom class: Base
class Base
{
	public:
		// Destructor
		virtual ~Base(void);
};

/* Functions */

Base* generate(void);

void identify(Base* p);

void identify(Base& p);
