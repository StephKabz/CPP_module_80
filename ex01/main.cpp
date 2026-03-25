/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 14:44:22 by kingstephan       #+#    #+#             */
/*   Updated: 2026/03/25 15:16:20 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void printSeparator(std::string title) {
    std::cout << "\n========================================" << std::endl;
    std::cout << "  " << title << std::endl;
    std::cout << "========================================" << std::endl;
};

int main(void)
{
	printSeparator("Test 1 : subject main!");
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	printSeparator("Test 2 : Class test!");
	Span span_test = Span(10001);
	span_test.addRangeOfNumbers<int>(0, 10001);
	std::cout << "Shortest span : " << span_test.shortestSpan() << std::endl;
	std::cout << "Longest span : " << span_test.longestSpan() << std::endl;
	try
	{
		span_test.addNumber(22);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Span empty = Span(0);
	try
	{
		empty.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Span one_item = Span(1);
	try
	{
		one_item.addNumber(1);
		one_item.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
