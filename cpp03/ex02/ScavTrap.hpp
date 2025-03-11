/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:02:54 by dinda-si          #+#    #+#             */
/*   Updated: 2025/03/10 17:47:51 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class Scavtrap: public Claptrap
{
	private:
		bool	guardmode;
	public:
		Scavtrap();
		Scavtrap(std::string n);
		Scavtrap(const Scavtrap &copy);
		Scavtrap &operator=(const Scavtrap &src);
		~Scavtrap();

		void	attack(const std::string&	target);
		void	guardGate();
};

#endif