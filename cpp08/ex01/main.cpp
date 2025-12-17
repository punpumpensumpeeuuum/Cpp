/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2025/12/17 23:05:06 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Span sp(5);
		int	i[5] = {6 , 3 ,17 ,9 ,11};
		sp.addNumber(&i[0], &i[5]);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Span sp2(2);

		sp2.addNumber(10);
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp3(1);

		sp3.addNumber(5);
		sp3.addNumber(8);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Span sp4(10000);

		for (int i = 0; i < 10000; i++)
			sp4.addNumber(rand());
		std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp4.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}