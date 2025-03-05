/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:02:33 by dinda-si          #+#    #+#             */
/*   Updated: 2025/03/05 18:32:14 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

Scavtrap::Scavtrap(): Claptrap()
{
	hp = 100;
	energy = 50;
	ad = 20;
	guardmode = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}
