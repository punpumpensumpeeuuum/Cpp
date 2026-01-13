/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2026/01/13 21:57:17 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H 

# include <iostream>
# include <algorithm>
# include <sys/time.h>
# include <cstdlib>
# include <climits>
# include <iomanip>
# include <vector>
# include <deque>

template <typename T>
T order(int n)
{
	T order;

	if (n <= 0)
		return order;
	order.push_back(0);
	if (n == 1)
		return order;
	order.push_back(1);
	int prev = 1;
	int curr = 3;
	while ((int)order.size() < n)
	{
		int upper = std::min(curr, n - 1);
		for (int i = upper; i > prev && (int)order.size() < n; --i)
			order.push_back(i);
		int next = curr + 2 * prev;
		prev = curr;
		curr = next;
	}
	return order;
}


void		parseInput(int ac, char **av, std::vector<int>& vector, std::deque<int>& deque);
void		sortVector(std::vector<int>& input);
void		sortDeque(std::deque<int>& input);
long long	getTimeMicroseconds();
void		printTime(long long start, long long end, size_t size, std::string type);

#endif