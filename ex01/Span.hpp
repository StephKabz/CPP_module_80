/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 19:48:19 by stkabang          #+#    #+#             */
/*   Updated: 2026/03/25 02:03:40 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <exception>

class Span {
	private :
		Span();
		std::vector<int> numbers;
		unsigned int max_capacity;
	public :
		Span(unsigned int N);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		template <typename Iterator>
		void Span::addRangeOfNumbers(Iterator begin, Iterator end)
		{
			for (Iterator it = begin; it != end; it++)
				addNumber(*it);
		};
		class NoNumberStored : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "No numbers stored!";
			};
		};
		class OneNumberStored : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Only one number stored!";
			};
		};
		class FullCapacity : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Vector is already!";
			};
		};
};

int max_minus_min(int a, int b);

#endif