/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:02:33 by dinda-si          #+#    #+#             */
/*   Updated: 2025/03/11 02:59:32 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

Scavtrap::Scavtrap(): Claptrap()
{
	hp = 100;
	energy = 50;
	ad = 20;
	guardmode = false;
	std::cout << "Default ScavTrap Constructor called" << std::endl;
}

Scavtrap::Scavtrap(std::string n): Claptrap(n)
{
	hp = 100;
	energy = 50;
	ad = 20;
	guardmode = false;
	std::cout << "ScavTrap Constructor for the name " << name << " called" << std::endl;
}

Scavtrap::Scavtrap(const Scavtrap &copy) : Claptrap(copy)
{
	std::cout << "Scavtrap Copy Constructor called" << std::endl;
	*this = copy;
}

Scavtrap &Scavtrap::operator=(const Scavtrap &copy)
{
	std::cout << "Scavtrap Assignation operator called" << std::endl;
	if (this != &copy)
	{
		name = copy.name;
		hp = copy.hp;
		energy = copy.energy;
		ad = copy.ad;
	}
	return (*this);
}

Scavtrap::~Scavtrap()
{
	std::cout << "ScavTrap Deconstructor for " << name << " called" << std::endl;
}

void	Scavtrap::attack(const std::string& target)
{
	if (energy > 0 && hp > 0)
	{
		energy--;
		std::cout << "Scavtrap " << name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
	}
	else if (energy == 0)
		std::cout << "Scavtrap " << name << " is too tired to attack." << std::endl;
	else
		std::cout << "Scavtrap " << name << " is dead he cant attack." << std::endl;
}

void	Scavtrap::guardGate()
{
	if (guardmode == false)
	{
		guardmode = true;
		std::cout << "Scavtrap " << name << " is guarding the gate." << std::endl;
	}
	else
		std::cout << "Scavtrap " << name << " is already guarding the gate." << std::endl;

}