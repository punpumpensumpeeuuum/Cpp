/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:01:38 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/20 18:59:00 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::inputs[5] =
{
	"First Name" ,
	"Last Name" ,
	"NickName" ,
	"Phone Number" ,
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		info[i] = "";
	return;
}

Contact::~Contact()
{
}

bool	Contact::only_spaces(const std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
			return false;
	}
	return true;
}

void	Contact::set_contact()
{
	for(int i = FirstName; i <= DarkestSecret; i++)
	{
		bool valido;
		std::string name;
		while (true)
		{
			valido = true;
			std::cout << "Enter the " << Contact::inputs[i] << ": ";
			if (!std::getline(std::cin, name))
				exit(0);
			for (size_t c = 0; c < name.length(); c++)
			{
				if (!std::isprint(name[c]) || only_spaces(name))
				{
					valido = false;
					break;
				}
			}
			if (!name.empty() && valido)
			{
				info[i] = name;
				break;
			}
			std::cout << "Need to write something" << std::endl;
		}

	}
}

std::string Contact::get_info(int i) const
{
	return info[i];
}

std::string Contact::get_book(int i) const
{
	return inputs[i];
}