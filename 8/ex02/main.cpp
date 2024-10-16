/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpeeters <lpeeters@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:41:17 by lpeeters          #+#    #+#             */
/*   Updated: 2024/10/11 00:37:52 by lpeeters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Includes */

#include <iostream> //input\output
#include <string> //string
#include <list> //list

#include "template/MutantStack.hpp"

// testing
int main(void)
{
    MutantStack<int> mstacksi;

	std::cout << "\nMUTANT STACK (ints)\n";

    mstacksi.push(5);
    mstacksi.push(17);
    std::cout << mstacksi.top() << '\n';
    mstacksi.pop();
    std::cout << mstacksi.size() << '\n';
    mstacksi.push(3);
    mstacksi.push(5);
    mstacksi.push(737);
    mstacksi.push(23);
    mstacksi.push(465);
    mstacksi.push(0);
    MutantStack<int>::iterator it = mstacksi.begin();
    MutantStack<int>::iterator ite = mstacksi.end();
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
    list1.push_back(23);
    list1.push_back(465);
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

    MutantStack<std::string> mstacks;

	std::cout << "\nMUTANT STACK (strings)\n";

    mstacks.push("Hi :).");
    std::cout << mstacks.top() << '\n';
    mstacks.pop();
    std::cout << mstacks.size() << '\n';
    mstacks.push("How ");
    mstacks.push("are ");
    mstacks.push("you");
    mstacks.push("?");
    MutantStack<std::string>::iterator it3 = mstacks.begin();
    MutantStack<std::string>::iterator ite3 = mstacks.end();
    ++it3;
    --it3;
    while (it3 != ite3)
    {
        std::cout << *it3;
        ++it3;
    }
    std::cout << "\n\n";
}
