/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:47:45 by dinda-si          #+#    #+#             */
/*   Updated: 2025/11/25 17:33:58 by dinda-si         ###   ########.fr       */
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
	if (s.size() == n || n == 0)
		throw std::exception();
	else
		s.push_back(num);
}