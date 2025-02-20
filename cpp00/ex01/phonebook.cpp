/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/20 19:03:30 by dinda-si         ###   ########.fr       */
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
	if (std::cin.eof() == true)
		exit(0);
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
	std::string number;
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
	while (true)
	{
		std::cout << "Choose contact number to display: ";
		if (!std::getline(std::cin, number))
			exit(0);
		if (!number.empty() && std::isdigit(number[0]) && number.length() == 1)
		{
			int	truenumber = number[0];
			truenumber--;
			if (truenumber >= 0 && truenumber < 8)
			{
				for (int i = 0; i < 5; i++)
					std::cout << contacts[truenumber].get_book(i) << " > " << contacts[truenumber].get_info(i) << std::endl;
				break;
			}
		}
		std::cout << "Invalid contact number" << std::endl;
	}
}