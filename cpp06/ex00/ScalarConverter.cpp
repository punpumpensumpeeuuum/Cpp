/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:09:52 by dinda-si          #+#    #+#             */
/*   Updated: 2025/10/21 17:31:50 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

bool	isPrintChar(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!std::isprint(str[i]))
			return (false);
	}
	return (true);
}

void	ScalarConverter::convert(std::String input)
{
	try
	{
		if (isPrintChar(input))
	}
	catch(const std::exception& e)
	{
		std::cout << "Invalid input" << std::endl;
	}
	
}