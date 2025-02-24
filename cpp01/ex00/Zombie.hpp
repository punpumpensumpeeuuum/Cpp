/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:20 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/24 21:53:19 by buddy2           ###   ########.fr       */
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
		Zombie(std::string n);
		~Zombie();

		void	announce(void) const;

};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif