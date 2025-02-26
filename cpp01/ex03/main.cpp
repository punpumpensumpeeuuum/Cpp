/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/25 04:33:34 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	Weapon knife = Weapon("kitchen knife");
	HumanA pedro = HumanA("Pedro", knife);
	pedro.attack();
	knife.setType("butter knife");
	pedro.attack();

	Weapon rocketlauncher = Weapon("Rocket launcher");
	HumanB bacano = HumanB("Bacano");
	bacano.attack();
	bacano.grabWeapon(rocketlauncher);
	bacano.attack();
	rocketlauncher.setType("stone");
	bacano.attack();

	return (0);
}

// int main()
// {
// {
// Weapon club = Weapon("crude spiked club");
// HumanA bob("Bob", club);
// bob.attack();
// club.setType("some other type of club");
// bob.attack();
// }
// {
// Weapon club = Weapon("crude spiked club");
// HumanB jim("Jim");
// jim.grabWeapon(club);
// jim.attack();
// club.setType("some other type of club");
// jim.attack();
// }
// return 0;
// }