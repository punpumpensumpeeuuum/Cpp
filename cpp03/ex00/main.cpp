/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/03/10 21:42:53 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	Claptrap a;
	Claptrap b("Maluco");
	
	a.attack("uma pessoa");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("outra pessoa");
	b.takeDamage(5);
	b.beRepaired(3);
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Maluco 2.0");
	b.takeDamage(5);
	b.beRepaired(3);
	return (0);
}
