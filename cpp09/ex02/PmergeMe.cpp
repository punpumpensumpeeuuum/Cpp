/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2026/01/06 19:02:41 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	parseInput(int ac, char **av, std::vector<int>& vector, std::deque<int>& deque)
{
	char	*end;
	std::vector<int>	v;
	std::deque<int>		d;
	for (int i = 1; i < ac; i++)
	{
		long numb = std::strtol(av[i], &end, 10);
		if (*end != '\0' || numb < 0 || numb > INT_MAX)
			throw std::exception();
		if (std::find(v.begin(), v.end(), numb) != v.end())
			throw std::exception();
		v.push_back(static_cast<int>(numb));
		d.push_back(static_cast<int>(numb));
	}
	vector = v;
	deque = d;
}

void	sortVector(std::vector<int>& input)
{
	
}
