/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:41:17 by lpeeters          #+#    #+#             */
/*   Updated: 2024/07/08 16:13:41 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output
#include <list>

#include "template/MutantStack.hpp"

// testing
int main(void)
{
    MutantStack<int> mstack;

	std::cout << "\nMUTANT STACK\n";

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << '\n';
    mstack.pop();
    std::cout << mstack.size() << '\n';
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << '\n';
        ++it;
    }

    std::cout << "\nLIST\n";

    std::list<int> list1;
    list1.push_back(5);
    list1.push_back(17);
    std::cout << list1.back() << '\n';
    list1.pop_back();
    std::cout << list1.size() << '\n';
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(737);
    //[...]
    list1.push_back(0);
    std::list<int>::iterator it1 = list1.begin();
    std::list<int>::iterator ite1 = list1.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << '\n';
        ++it1;
    }
    std::cout << '\n';
}
