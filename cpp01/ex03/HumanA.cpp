/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/25 04:22:29 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : aweapon(weapon)
{
	this->aname = name;
	std::cout << aname << " has a " << aweapon.getType() << "." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << aname << " is dead😭" << std::endl;
}

void	HumanA::attack()
{
	std::cout << aname << " attacks using his " << aweapon.getType() << "!" << std::endl;
}
