/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 00:07:54 by kingstephan       #+#    #+#             */
/*   Updated: 2026/03/25 02:03:28 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	max_capacity = N;
	numbers.reserve(max_capacity);
};

Span::Span(const Span &other)
{
	this->max_capacity = other.max_capacity;
	this->numbers.reserve(other.max_capacity);
	this->numbers = other.numbers;
};

Span& Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);
	this->max_capacity = other.max_capacity;
	this->numbers.reserve(other.max_capacity);
	this->numbers = other.numbers;
	return (*this);
};

Span::~Span(){};

void Span::addNumber(int n)
{
	if (this->numbers.size() == this->max_capacity)
		throw Span::FullCapacity();
	this->numbers.push_back(n);
};

int Span::shortestSpan()
{
	if (this->numbers.size() == 0)
		throw Span::NoNumberStored();
	if (this->numbers.size() == 1)
		throw Span::OneNumberStored();
	std::vector<int> copy = this->numbers;
	std::sort(copy.begin(), copy.end());
	unsigned int min = 0;
	unsigned int new_min = INT_MAX;
	for (unsigned int i = 0; i < copy.size() - 1; i++)
	{
		min = max_minus_min(copy.at(i), copy.at(i + 1)); 
		if (new_min > min)
			new_min = min;
	}
	return (new_min);
};

int Span::longestSpan()
{
	if (this->numbers.size() == 0)
		throw Span::NoNumberStored();
	if (this->numbers.size() == 1)
		throw Span::OneNumberStored();
	return ((*std::max_element(this->numbers.begin(), this->numbers.end()))
			 - (*std::min_element(this->numbers.begin(), this->numbers.end())));
};

int max_minus_min(int a, int b)
{
	if (a > b)
		return (a - b);
	return (b - a);
}

