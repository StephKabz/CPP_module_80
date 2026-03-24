/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 19:05:57 by stkabang          #+#    #+#             */
/*   Updated: 2026/03/24 19:28:33 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void printSeparator(std::string title) {
    std::cout << "\n========================================" << std::endl;
    std::cout << "  " << title << std::endl;
    std::cout << "========================================" << std::endl;
};

int main(void)
{
	printSeparator("Test 1 : vector int!");
	int myints[] = {1, 45 ,48, 3, 37, 54, 7};
	std::vector<int> tab_int(myints, myints+7);
	try
	{
		easyfind(tab_int, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		easyfind(tab_int, 55);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*-------------------------------------------------------*/
	printSeparator("Test 2 : list int!");
	std::list<int> list_int;
	list_int.push_back(1);
	list_int.push_back(22);
	list_int.push_back(33);
	list_int.push_front(0);
	list_int.push_back(12);
	list_int.push_back(7);
	list_int.push_back(13);
	try
	{
		easyfind(list_int, 7);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(list_int, 14);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
		
}
