/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2026/01/15 15:53:46 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN ()
{
}

RPN::RPN (const RPN &a)
{
	this->operator=(a);
}

RPN::~RPN ()
{
}

RPN & RPN::operator = (const RPN &a)
{
	(void)a;
	return (*this);
}

int		RPN::Result(int n1, int n2, char o)
{
	switch (o)
	{
		case '+':
			return (n1 + n2);
		case '-':
			return (n2 - n1);
		case '*':
			return (n1 * n2);
		case '/':
		{
			if (n1 == 0)
				std::cerr << "Invalid arguments";
			return (n2 / n1);
		}
	}
	return (0);
}

void	RPN::Parsing(std::string input)
{
	std::stringstream ss(input);
	std::string digit;

	while (ss >> digit)
	{
		char *end;
		long value = std::strtol(digit.c_str(), &end, 10);

		if (*end == '\0')
			num.push(static_cast<int>(value));
		else if (digit.size() == 1 && std::string("+-*/").find(digit[0]) != std::string::npos)
		{
			if (num.size() < 2)
			{
				std::cerr << "Too many operators\n";
				return;
			}
			int n1 = num.top(); num.pop();
			int n2 = num.top(); num.pop();
			num.push(Result(n1, n2, digit[0]));
		}
		else
		{
			std::cerr << "Error\n";
			return;
		}
	}
	if (num.size() != 1)
	{
		std::cerr << "Wrong usage\n";
		return;
	}
	std::cout << num.top() << std::endl;
}
