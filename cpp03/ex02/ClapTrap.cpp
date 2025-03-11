/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 23:13:06 by buddy2            #+#    #+#             */
/*   Updated: 2025/03/10 21:58:58 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap(): name("Random"), hp(10), energy(10), ad(0) 
{
	std::cout << "Default ClapTrap Constructor called" << std::endl;
}

Claptrap::Claptrap(std::string n): name(n), hp(10), energy(10), ad(0)
{
	std::cout << "ClapTrap Constructor for the name " << name << " called" << std::endl;
}

Claptrap::Claptrap(const Claptrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

Claptrap &Claptrap::operator=(const Claptrap &copy)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if (this != &copy)
	{
		name = copy.name;
		hp = copy.hp;
		energy = copy.energy;
		ad = copy.ad;
	}
	return (*this);
}

Claptrap::~Claptrap()
{
	std::cout << "ClapTrap " << name << " was destroyed." << std::endl;
}

void	Claptrap::attack(const std::string& target)
{
	if (energy > 0 && hp > 0)
	{
		energy--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
	}
	else if (energy == 0)
		std::cout << "ClapTrap " << name << " is too tired to attack." << std::endl;
	else
		std::cout << "ClapTrap " << name << " is dead he cant attack." << std::endl;
}

void	Claptrap::takeDamage(unsigned int amount)
{
	if (hp > 0)
	{
		if (amount >= hp)
			hp = 0;
		else
			hp -= amount;
		std::cout << "ClapTrap " << name << " suffered " << amount << " damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is dead he cant take any more damage." << std::endl;	
}

void	Claptrap::beRepaired(unsigned int amount)
{
	if (energy > 0 && hp > 0 && hp < 10)
	{
		hp += amount;
		energy--;
		if (hp > 10)
			hp = 10;
		std::cout << "ClapTrap " << name << " repaired " << amount << " health points and now has " << hp << "!" << std::endl;
	}
	else if (hp >= 10)
		std::cout << "ClapTrap " << name << " already full health." << std::endl;
	else if (energy == 0)
		std::cout << "ClapTrap " << name << " is too tired to be repaired." << std::endl;
	else
		std::cout << "ClapTrap " << name << " is dead he cant be repaired." << std::endl;	
}