/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:09:52 by dinda-si          #+#    #+#             */
/*   Updated: 2025/11/13 01:26:42 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization()
{}

Serialization::Serialization(const Serialization &copy)
{
	*this = copy;
}

Serialization	&Serialization::operator=(const Serialization &copy)
{
	(void)copy;
	return (*this);
}

Serialization::~Serialization()
{}

Data*	Serialization::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t Serialization::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
