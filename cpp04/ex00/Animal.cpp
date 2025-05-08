/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:47 by buddy2            #+#    #+#             */
/*   Updated: 2025/05/08 18:33:30 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	name = "Animal";	
	std::cout << "Default Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	this->name = copy.name;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		this->name = copy.name;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal was destroyed" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Random wild noises" << std::endl;
}

std::string	Animal::getType() const
{
	return(this->name);
}