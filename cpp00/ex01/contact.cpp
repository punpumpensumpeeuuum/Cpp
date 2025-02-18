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
	"Nickname" ,
	"Phone Number" ,
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		inputs[i] = std::string();
	return;
}

Contact::~Contact()
{
}

void	Contact::set_contact()
{
	for(int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "Enter the " << Contact::inputs[i] << ":\n";
		// get the input form the terminal   std::getline??? n sei		
	}
}