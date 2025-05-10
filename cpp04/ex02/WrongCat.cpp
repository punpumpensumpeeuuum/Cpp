/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:27:57 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/09 11:33:20 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	name = "Wrong Cat";	
	std::cout << "🦑MEOW🦑 Default Wrong Cat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "🦑MEOW🦑 Wrong Cat Copy Constructor called" << std::endl;
	this->name = copy.getType();
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
		this->name = copy.name;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "🦑MEOW🦑 Wrong Cat was destroyed" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "🦑MEOW🦑MEOW🦑MEOW🦑MEOW🦑MEOW🦑" << std::endl;
}

std::string	WrongCat::getType() const
{
	return(this->name);
}