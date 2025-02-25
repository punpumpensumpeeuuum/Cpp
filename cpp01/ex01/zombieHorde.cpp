/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 23:23:28 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/24 23:57:45 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde(int N, std::string name)
{
	if (N <= 1)
	{
		std::cout << "Invalid horde size" << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].nametag(name);
	return (horde);
}