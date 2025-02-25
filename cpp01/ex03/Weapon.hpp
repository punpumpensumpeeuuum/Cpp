/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:20 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/25 03:38:52 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string		name;
	public:
		Weapon(const std::string &weapon);
		~Weapon();

		std::string		getType() const;
		void			setType(const std::string &weapon);
};

#endif