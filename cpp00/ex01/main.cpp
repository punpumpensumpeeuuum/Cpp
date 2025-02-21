/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/20 14:50:23 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	bool		runnig = true;

	while (runnig)
	{
		if (std::cin.eof() == true)
			exit(0);
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		if (command == "SEARCH")
			phonebook.displayContacts();
		if (command == "EXIT")
			runnig = false;
		command.clear();
	}
	return 0;
}