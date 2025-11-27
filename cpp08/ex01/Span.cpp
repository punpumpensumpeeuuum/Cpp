/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:47:45 by dinda-si          #+#    #+#             */
/*   Updated: 2025/11/27 16:13:51 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int i)
{
	this->n = i;
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

size_t	Span::longestSpan()
{
	if (v.size() < 2)
		throw std::exception();
	
}