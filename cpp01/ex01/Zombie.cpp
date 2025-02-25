/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 23:13:06 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/24 23:48:16 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << Zombie::name << " is dead and destroyed💀" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;	
}

void	Zombie::nametag(std::string tag)
{
	this->name = tag;
}