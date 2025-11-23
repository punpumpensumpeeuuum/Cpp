/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:21:28 by buddy2            #+#    #+#             */
/*   Updated: 2025/11/23 20:25:37 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> numbers(20);
	int* mirror = new int[20];
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	for (int i = 0; i < 20; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "ERRO" << std::endl;
			return (1);
		}
	}
	try
	{
		std::cout << numbers[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << numbers[-2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << numbers[20] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete [] mirror;
	return 0;
}