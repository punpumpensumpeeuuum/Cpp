/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:16:55 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/09 16:50:59 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	name = "Cat";	
	this->brain = new Brain;
	std::cout << "🐈MEOW🐈 Default Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "🐈MEOW🐈 Cat Copy Constructor called" << std::endl;
	this->name = copy.getType();
	this->brain = new Brain(*copy.getBrain());
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		this->name = copy.name;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*copy.getBrain());
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
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

Brain *Cat::getBrain() const
{
	return (this->brain);
}

void	Cat::speakUp(unsigned int i)
{
	if (i < 100)
		std::cout << "🐈MEOW🐈 This cat is thinking \"" << brain->getIdeas()[i] << "\"" << std::endl;
}