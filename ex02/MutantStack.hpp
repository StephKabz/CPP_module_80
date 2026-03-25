/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:59:02 by kingstephan       #+#    #+#             */
/*   Updated: 2026/03/25 16:14:06 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <cmath>
#include <climits>
#include <exception>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack(){};
		MutantStack(const MutantStack &other);
		MutantStack& operator=(const MutantStack &other);
		~MutantStack(){};
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		iterator begin();
		iterator end();
};

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other) {};

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> &other)
{
	if (this == &other)
		return (*this);
	std::stack<T>::operator=(other);
	return (*this);
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
};
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
};

#endif