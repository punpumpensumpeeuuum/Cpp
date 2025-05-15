/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:20:07 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/15 07:52:04 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Craz("Craz", 170);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Craz2("Craz2", -124);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
	Bureaucrat Burr("Burr", 1);
	try
	{
		Burr.decreaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << Burr << std::endl;
	try
	{
		Burr.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
	Burr.setGrade(150);
	try
	{
		Burr.decreaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
}