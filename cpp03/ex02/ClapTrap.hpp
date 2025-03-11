/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:47 by buddy2            #+#    #+#             */
/*   Updated: 2025/03/05 18:31:23 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class Claptrap
{
	protected:
		std::string			name;
		unsigned int		hp;
		unsigned int		energy;
		unsigned int		ad;
	public:
		Claptrap();
		Claptrap(std::string n);
		Claptrap(const Claptrap &copy);
		Claptrap &operator=(const Claptrap &src);
		~Claptrap();

		void	attack(const std::string&	target);
		void	takeDamage(unsigned int		amount);
		void	beRepaired(unsigned int		amount);
};

#endif