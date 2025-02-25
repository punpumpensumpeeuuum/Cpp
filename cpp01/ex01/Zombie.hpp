/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:20 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/24 23:47:54 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string		name;
	public:
		Zombie();
		~Zombie();

		void	announce(void) const;
		void	nametag(std::string tag);
};

Zombie*		zombieHorde( int N, std::string name );

#endif