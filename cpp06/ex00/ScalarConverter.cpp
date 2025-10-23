/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:09:52 by dinda-si          #+#    #+#             */
/*   Updated: 2025/10/23 16:31:01 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <stdlib.h>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void)copy;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

bool	isPrintChar(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isprint(str[i]))
			return (false);
	}
	return (true);
}

bool	onlyDigits(const std::string str)
{
	size_t i = 0;
	if (str[0] == '-')
		i++;
	for (; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

int	floatOrDouble(std::string str)
{
	int		point = 0;
	int		f = 0;
	size_t	i = 0;
	if (str[0] == '-')
		i = 1;
	for (; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			if (!std::isdigit(str[i+1]))
				return (-1);
			point++;
		}
		else if (!std::isdigit(str[i]))
		{
			if (str[i] == 'f')
				f++;
			else
				return (-1);
		}
	}
	if (point == 1 && f == 0)
		return (4);
	if (point == 1 && f == 1 && str[str.length() - 1] == 'f')
		return (3);
	return (-1);
}

int	findType(std::string input)
{
	if (input.length() < 1)
		return (0);
	if (onlyDigits(input))
		return (2);
	else if (input.length() == 1)
		return (1);
	else if ((input == "+inff") || (input == "-inff") || (input == "nanf") || (input == "+inf") || (input == "-inf") || (input == "nan"))
		return (5);
	else if (floatOrDouble(input) > 0)
		return (floatOrDouble(input));
	return (0);
}

void	ScalarConverter::convert(std::string input)
{
	char	c = 'c';
	int		i = 0;
	float	f = 0.0f;
	double	d = 0.0;

	int type = findType(input);
	switch (type)
	{
		case 1: // char
			c = input[0];
			if (std::isprint(c))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(c) << std::endl;
			std::cout << std::fixed << std::setprecision(1);
			std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(c) << std::endl;
			break;
		case 2: // int
			i = atoi(input.c_str());
			c = i;
			if (std::isprint(i))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(i) << std::endl;
			std::cout << std::fixed << std::setprecision(1);
			std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(i) << std::endl;
			break;
		case 3: // float
			f = atof(input.c_str());
			i = f;
			c = i;
			if (std::isprint(i))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(i) << std::endl;
			if (!(f > i))
				std::cout << std::fixed << std::setprecision(1);
			std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(f) << std::endl;
			break;
		case 4: // double
			d = strtod(input.c_str(), NULL);
			i = d;
			c = i;
			if (std::isprint(i))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(i) << std::endl;
			if (!(d > i))
				std::cout << std::fixed << std::setprecision(1);
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(d) << std::endl;
			break;
		case 5: // pseudoliteral
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			if (input == "-inff" || input == "+inff" || input == "nanf")
			{
				std::cout << "float: " << input << std::endl;
				std::cout << "double: " << input.substr(0, input.length() - 1) << std::endl;
			}
			else
			{
				std::cout << "float: " << input + "f" << std::endl;
				std::cout << "double: " << input << std::endl;
			}
			break;
		default:
			std::cout << "Invalid input" << std::endl;
	}
}