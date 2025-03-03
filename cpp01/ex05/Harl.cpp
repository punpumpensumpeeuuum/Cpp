/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 02:49:10 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/27 03:49:27 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{	
}

void	Harl::complain(std::string level)
{
	void			(Harl::*funtionpointers[])(void) = {&Harl::debug, &Harl::info,
				 &Harl::warning, &Harl::error};
	std::string		input[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (input[i] == level)
			(this->*funtionpointers[i])();
	}
}

void 	Harl::debug(void)
{
	std::cout << "Debug🐛" << std::endl;
}

void 	Harl::info(void)
{
	std::cout << "Info🤓 " << std::endl;
}

void 	Harl::warning(void)
{
	std::cout << "warning⚠️" << std::endl;
}

void 	Harl::error(void)
{
	std::cout << "BOM DIA👽" << std::endl;
}

