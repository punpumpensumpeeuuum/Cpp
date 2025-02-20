/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/18 17:01:17 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
	full = false;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	if (i >= 8)
	{
		std::cout << "PhoneBook is full! Oldest contact will be replaced.\n";
		i = 0;
		full = true;
	}
	contacts[i].set_contact();
	i++;
}

void	PhoneBook::displayContacts() const
{
	if (i == 0 && full == false)
	{
		std::cout << "No contacts added yet" << std::endl;
		return ;
	}

	std::cout << " ---------------------------------------------------" << std::endl;
	std::cout << "| Index      | First Name | Last Name  | Nickname   |" << std::endl;
	std::cout << " ---------------------------------------------------" << std::endl;

	int	pos = i;
	if (full)
		pos = 8;
	else
		pos = i;
	for (int index = 0; index < pos; index++)
	{
		std::cout << "| " << std::setw(10) << std::left << index + 1 << " |";

		for (int j = 0; j <= 2; j++)
		{
			std::string field = contacts[index].get_info(j);
			if (field.length() > 10)
				field = field.substr(0, 9) + ".";
			std::cout << " " << std::setw(10) << std::left << field << " |";
		}
		std::cout << std::endl;
	}
	std::cout << " ---------------------------------------------------" << std::endl;

}