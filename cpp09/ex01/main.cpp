/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2026/01/15 15:31:17 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN a;
	if (ac < 2)
	{
		std::cerr << "Error\n";
		exit(0);
	}
	std::string input;
	for (int i = 1; i < ac; i++)
	{
		input += av[i];
		if (i + 1 < ac)
			input += " ";
	}
	a.Parsing(input);
}