/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 02:49:10 by buddy2            #+#    #+#             */
/*   Updated: 2025/02/27 20:16:25 by buddy2           ###   ########.fr       */
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
	int i = 0;
	for (; i < 4; i++)
	{
		if (input[i] == level)
			break;
	}
	switch (i)
	{
		case (0):
			(this->*funtionpointers[0])();
		case (1):
			(this->*funtionpointers[1])();
		case (2):
			(this->*funtionpointers[2])();
		case (3):
			(this->*funtionpointers[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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

