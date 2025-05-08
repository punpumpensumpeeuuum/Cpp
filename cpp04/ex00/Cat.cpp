/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:16:55 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/08 18:33:34 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	name = "Cat";	
	std::cout << "🐈MEOW🐈 Default Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "🐈MEOW🐈 Cat Copy Constructor called" << std::endl;
	this->name = copy.name;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		this->name = copy.name;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "🐈MEOW🐈 Cat was destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "🐈MEOW🐈MEOW🐈MEOW🐈MEOW🐈MEOW🐈" << std::endl;
}

std::string	Cat::getType() const
{
	return(this->name);
}
