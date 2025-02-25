/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/25 04:14:58 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->bname = name;
	ready = false;
	std::cout << bname << " doesnt have a weapon." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << bname << " is dead😭" << std::endl;
}

void	HumanB::attack()
{
	if (ready)
		std::cout << bname << " attacks using his " << bweapon->getType() << "!" << std::endl;
	else
		std::cout << bname << " throws a punch!" << std::endl;
}

void	HumanB::grabWeapon(Weapon &weapon)
{
	bweapon = &weapon;
	ready = true;
	std::cout << bname << " grabbed a" << bweapon->getType() << "." << std::endl;
}

