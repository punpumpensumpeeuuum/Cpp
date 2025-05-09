/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:22:18 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/09 11:26:04 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	name = "Wrong Animal";	
	std::cout << "Default Wrong Animal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Wrong Animal Copy Constructor called" << std::endl;
	this->name = copy.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
		this->name = copy.name;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal was destroyed" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Random WRONG wild noises" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(this->name);
}