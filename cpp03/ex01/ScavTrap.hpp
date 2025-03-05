/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:02:54 by dinda-si          #+#    #+#             */
/*   Updated: 2025/03/05 17:58:16 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_H
# define SCRAVTRAP_H

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