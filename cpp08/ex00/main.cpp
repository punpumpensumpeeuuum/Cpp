/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2025/11/24 11:46:16 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <list>

int main()
{
	std::vector<int> vec;
	for (int i = 1; i < 11; i++)
	{
		vec.push_back(i);
	}
	std::cout << *easyfind(vec, 4) << std::endl;
	std::cout << *easyfind(vec, 5) << std::endl;
	
	try 
	{
		std::cout << *easyfind(vec, 1094) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::list<int> vec2;
	vec2.push_back(-100);
	vec2.push_back(3);
	vec2.push_back(10);
	vec2.push_back(4);
	vec2.push_back(30);
	
	std::cout << *easyfind(vec2, 3) << std::endl;
	std::cout << *easyfind(vec2, 10) << std::endl;
	std::cout << *easyfind(vec2, -100) << std::endl;
	try 
	{
		std::cout << *easyfind(vec2, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}