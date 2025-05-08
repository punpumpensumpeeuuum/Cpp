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

#include "FragTrap.hpp"

int main()
{
	Fragtrap c("Froggy");
	Fragtrap d;

	c.attack("uma pessoa 3");
	c.beRepaired(5);
	c.takeDamage(99);
	c.highFivesGuys();
	c.takeDamage(10);
	c.attack("outra pessoa 3");
	d.takeDamage(5);
	d.beRepaired(3);
	d.beRepaired(3);
	d.highFivesGuys();
	return 0;
}
