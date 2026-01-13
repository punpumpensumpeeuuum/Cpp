/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2026/01/13 17:14:42 by dinda-si         ###   ########.fr       */
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
	if (input.size() <= 1)
		return;

	std::vector<int>	bn;
	std::vector<int>	sn;

	for (size_t i = 0; i < input.size() - 1; i += 2)
	{
		if (input[i] > input[i + 1])
		{
			bn.push_back(input[i]);
			sn.push_back(input[i + 1]);
		}
		else
		{
			bn.push_back(input[i + 1]);
			sn.push_back(input[i]);
		}
	}
	sortVector(bn);
	
	std::vector<int>	sorted = bn;
	
	if (!sn.empty())
	{
		std::vector<int>	ord = order<std::vector<int>>(sn.size());
		for (size_t i = 0; i < sn.size(); ++i)
		{
			int index = ord[i];
			std::vector<int>::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), sn[index]);
			sorted.insert(pos, sn[index]);
		}
	}
	int leftover = -1;
	if (input.size() % 2 != 0)
		leftover = input.back();
	if (leftover != -1)
	{
		std::vector<int>::iterator  pos = std::lower_bound(sorted.begin(), sorted.end(), leftover);
		sorted.insert(pos, leftover);
	}
	input = sorted;
}

void	sortDeque(std::deque<int>& input)
{
	if (input.size() <= 1)
		return;

	std::deque<int>	bn;
	std::deque<int>	sn;

	for (size_t i = 0; i < input.size() - 1; i += 2)
	{
		if (input[i] > input[i + 1])
		{
			bn.push_back(input[i]);
			sn.push_back(input[i + 1]);
		}
		else
		{
			bn.push_back(input[i + 1]);
			sn.push_back(input[i]);
		}
	}
	sortDeque(bn);
	
	std::deque<int>	sorted = bn;
	
	if (!sn.empty())
	{
		std::deque<int>	ord = order<std::deque<int>>(sn.size());
		for (size_t i = 0; i < sn.size(); ++i)
		{
			int index = ord[i];
			std::deque<int>::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), sn[index]);
			sorted.insert(pos, sn[index]);
		}
	}
	int leftover = -1;
	if (input.size() % 2 != 0)
		leftover = input.back();
	if (leftover != -1)
	{
		std::deque<int>::iterator  pos = std::lower_bound(sorted.begin(), sorted.end(), leftover);
		sorted.insert(pos, leftover);
	}
	input = sorted;
}
