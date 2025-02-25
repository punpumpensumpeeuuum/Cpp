/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:20 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/25 04:26:18 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string		aname;
		Weapon			&aweapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack();
};

#endif