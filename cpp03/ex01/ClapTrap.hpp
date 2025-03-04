/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:47 by buddy2            #+#    #+#             */
/*   Updated: 2025/03/04 15:48:05 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class Claptrap
{
	private:
		std::string			name;
		int	unsigned		hp;
		int	unsigned		energy;
		int	unsigned		ad;
	public:
		Claptrap();
		Claptrap(std::string n);
		~Claptrap();

		void	attack(const std::string&	target);
		void	takeDamage(unsigned int		amount);
		void	beRepaired(unsigned int		amount);
};

#endif