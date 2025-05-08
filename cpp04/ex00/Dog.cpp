/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:20:32 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/08 18:33:36 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	name = "Dog";	
	std::cout << "🐕WOOF🐕 Default Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "🐕WOOF🐕 Dog Copy Constructor called" << std::endl;
	this->name = copy.name;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		this->name = copy.name;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "🐕WOOF🐕 Dog was destroyed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "🐕WOOF🐕WOOF🐕WOOF🐕WOOF🐕WOOF🐕" << std::endl;
}

std::string	Dog::getType() const
{
	return(this->name);
}