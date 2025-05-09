/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:20:32 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/09 16:50:53 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	name = "Dog";
	this->brain = new Brain;
	std::cout << "🐕WOOF🐕 Default Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "🐕WOOF🐕 Dog Copy Constructor called" << std::endl;
	this->name = copy.getType();
	this->brain = new Brain(*copy.getBrain());
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		this->name = copy.name;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*copy.getBrain());
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

Brain *Dog::getBrain() const
{
	return (this->brain);
}

void	Dog::speakUp(unsigned int i)
{
	if (i < 100)
		std::cout << "🐕WOOF🐕 This cat is thinking \"" << brain->getIdeas()[i] << "\"" << std::endl;
}