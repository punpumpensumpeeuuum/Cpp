/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:16:23 by buddy2            #+#    #+#             */
/*   Updated: 2025/12/13 20:50:02 by buddy2           ###   ########.fr       */
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
			if (n2 == 0)
				std::cerr << "Invalid arguments" << std::endl;
			return (n2 / n1);
		}
	}
	return (0);
}

void	RPN::Parsing(std::string input)
{
	std::string op = "+-*/";
	int n, o = 0;
	n = 0;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (isdigit(input[i]))
		{
			n++;
			num.push(input[i] - 48);
		}
		else if (op.find(input[i]) != std::string::npos)
		{
			o++;
			int c = num.top();
			num.pop();
			num.top() = Result(c, num.top(), input[i]);
		}
		else if (isspace(input[i]))
			continue;
		else
		{
			std::cerr << "Error" << std::endl;
			return;
		}
	}
	if ((n - 1) != o)
		std::cerr << "Wrong usage" << std::endl;
	std::cout << num.top() << std::endl;
}