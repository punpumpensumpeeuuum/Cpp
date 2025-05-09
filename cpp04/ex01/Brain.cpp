/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:33:13 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/09 15:02:35 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

unsigned int pensamento = 0;

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Super Idea";
	std::cout << "Default Brain Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::string *copyide = copy.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copyide[i];
	std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "Brain was destroyed" << std::endl;
}

std::string* Brain::getIdeas() const
{
	return (this->ideas);
}


void Brain::setIdeas(std::string idea)
{
	if (this->pensamento < 100)
	{
		this->ideas[this->pensamento] = idea;
		this->pensamento++;
	}
	else
		std::cout << "This brain is full of ideas" << std::endl;
}