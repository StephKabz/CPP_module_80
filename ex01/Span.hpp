/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 19:48:19 by stkabang          #+#    #+#             */
/*   Updated: 2026/03/24 19:54:11 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class Span {
	private :
		Span();
	public :
		Span(int N);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();
		void addNumber();
		int shortestSpan();
		int longestSpan();
};

#endif