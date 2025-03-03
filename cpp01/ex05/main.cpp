/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/27 03:50:49 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;
	while (true)
	{
		std::cout << "input: ";
		std::string input;
		getline(std::cin, input);
		if (!input.compare("EXIT"))
			return (2);
		if (std::cin.eof() == true)
			return (1);
		if (input.empty())
			std::cout << "Write something";
		harl.complain(input);
	}
	return (0);
}
