/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:16:28 by buddy2            #+#    #+#             */
/*   Updated: 2025/03/11 02:59:05 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class Fragtrap: public Claptrap
{
	private:
		
	public:
		Fragtrap();
		Fragtrap(std::string n);
		Fragtrap(const Fragtrap &copy);
		Fragtrap &operator=(const Fragtrap &src);
		~Fragtrap();

		void	highFivesGuys(void);
	};

#endif