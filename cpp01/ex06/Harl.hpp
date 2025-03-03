/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 02:42:00 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/27 02:47:28 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
	private:
		void 	debug(void);
		void 	info(void);
		void 	warning(void);
		void 	error(void);
	public:
		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif