/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:01:38 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/18 18:27:57 by dinda-si         ###   ########.fr       */
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

void	Contact::set_contact()
{
	for(int i = FirstName; i <= DarkestSecret; i++)
	{
		std::string name;
		std::cout << "Enter the " << Contact::inputs[i] << ": ";
		std::getline(std::cin , name);
		if (!name.empty())
			info[i] = name;
		
	}
}

void Contact::display_contact(int index) const
{
	std::cout << "|Contact n" << index;
	for(int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "|";
		if (info[i].length() > 10)
			std::cout << info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::left << info[i];
	}
	std::cout << "|" << std::endl;
}
