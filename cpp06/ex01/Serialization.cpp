/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:09:52 by dinda-si          #+#    #+#             */
/*   Updated: 2025/11/10 17:58:10 by dinda-si         ###   ########.fr       */
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
{

}

Data*	Serialization::deserialize(uintprt_t raw)
{
	return (NULL);
}

uintptr_t Serialization::serialize(Data* ptr)
{
	return (0);
}
