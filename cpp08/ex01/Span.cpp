/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:47:45 by dinda-si          #+#    #+#             */
/*   Updated: 2025/12/03 00:36:18 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->n = 0;
}

Span::Span(unsigned int i)
{
	this->n = i;
}

Span::Span(const Span& s)
{
	*this = s;
}

Span	&Span::operator=( const Span &s )
{
	if (this != &s)
	{
		this->n = s.n;
	}
	return (*this);
}


Span::~Span()
{
	
}

void	Span::addNumber(int num)
{
	if (v.size() == n || n == 0)
		throw std::exception();
	else
		v.push_back(num);
}

size_t	Span::shortestSpan()
{
	if (v.size() < 2)
		throw std::exception();
	std::vector<int> tv(v);
	std::sort(tv.begin(), tv.end());
	size_t shortest = 1251251125152351252;
	for (size_t i = 0; i < tv.size(); i++)
	{
        size_t small = tv[i + 1] - tv[i];
		if (small < shortest)
			shortest = small;
	}
	return (shortest);
}

size_t	Span::longestSpan()
{
	if (v.size() < 2)
		throw std::exception();
	int min = *std::min_element(v.begin(), v.end());
	int max = *std::max_element(v.begin(), v.end());
	return (max - min);
}