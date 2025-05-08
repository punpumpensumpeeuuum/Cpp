/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/03/10 21:52:34 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	Scavtrap c("Scavycavy");
	Scavtrap d;

	c.attack("uma pessoa 2");
	c.beRepaired(5);
	c.takeDamage(99);
	c.guardGate();
	c.guardGate();
	c.takeDamage(10);
	c.attack("outra pessoa 2");
	d.takeDamage(5);
	d.beRepaired(3);
	d.beRepaired(3);
	return (0);
}
