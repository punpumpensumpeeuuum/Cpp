/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2026/01/13 21:59:03 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "No numbers" << std::endl;	
		return (1);
	}
	try 
	{
		std::vector<int>	vector;
		std::deque<int>		deque;
		long long			startT;
		long long			endT;
		
		parseInput(ac, av, vector, deque);
		startT = getTimeMicroseconds();
		sortVector(vector);
		endT = getTimeMicroseconds();
		printTime(startT, endT, vector.size(), "vector");

		startT = getTimeMicroseconds();
		sortDeque(deque);
		endT = getTimeMicroseconds();
		printTime(startT, endT, deque.size(), "deque");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

// for (size_t i = 0; i < vector.size(); i++)
// 	std::cout << deque[i] << " " << vector[i] << std::endl;