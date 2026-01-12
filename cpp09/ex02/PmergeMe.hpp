/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2026/01/06 19:02:18 by buddy2           ###   ########.fr       */
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

void	parseInput(int ac, char **av, std::vector<int>& vector, std::deque<int>& deque);
void    sortVector(std::vector<int>& input);

#endif