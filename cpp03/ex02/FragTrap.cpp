/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:16:28 by buddy2            #+#    #+#             */
/*   Updated: 2025/03/11 03:01:11 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

Fragtrap::Fragtrap(): Claptrap()
{
	hp = 100;
	energy = 100;
	ad = 30;
	std::cout << "Default Fragtrap Constructor called" << std::endl;
}

Fragtrap::Fragtrap(std::string n): Claptrap(n)
{
	hp = 100;
	energy = 100;
	ad = 30;
	std::cout << "Fragtrap Constructor for the name " << name << " called" << std::endl;
}

Fragtrap::Fragtrap(const Fragtrap &copy) : Claptrap(copy)
{
	std::cout << "Fragtrap Copy Constructor called" << std::endl;
	*this = copy;
}

Fragtrap &Fragtrap::operator=(const Fragtrap &copy)
{
	std::cout << "Fragtrap Assignation operator called" << std::endl;
	if (this != &copy)
	{
		name = copy.name;
		hp = copy.hp;
		energy = copy.energy;
		ad = copy.ad;
	}
	return (*this);
}

Fragtrap::~Fragtrap()
{
	std::cout << "Fragtrap Deconstructor for " << name << " called" << std::endl;
}

void	Fragtrap::highFivesGuys(void)
{
	std::string ans;

	std::cout << this->name << " wants a high five!";
	std::getline(std::cin, ans);
	if (ans.empty())
		std::cout << ":D" << std::endl;
	else
		std::cout << ":C" << std::endl;
}