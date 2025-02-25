/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:20 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/25 03:56:34 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string		bname;
		Weapon			*bweapon;
		bool			ready;
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	grabWeapon(Weapon &weapon);
};

#endif