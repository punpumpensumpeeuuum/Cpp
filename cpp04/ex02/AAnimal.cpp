/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:47 by buddy2            #+#    #+#             */
/*   Updated: 2025/05/10 14:31:30 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	name = "AAnimal";	
	std::cout << "Default AAnimal Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "AAnimal Copy Constructor called" << std::endl;
	this->name = copy.getType();
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
	if (this != &copy)
		this->name = copy.name;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal was destroyed" << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout << "Random wild noises" << std::endl;
}

std::string	AAnimal::getType() const
{
	return(this->name);
}