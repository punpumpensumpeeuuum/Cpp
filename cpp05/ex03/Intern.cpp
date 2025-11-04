/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:46:20 by dinda-si          #+#    #+#             */
/*   Updated: 2025/11/04 13:33:35 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default Intern costructor"<< std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
	std::cout << "Copy Intern costructor"<< std::endl;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern has beed destroyed" << std::endl;
}

AForm*	Intern::makeForm(const std::string name, const std::string target)
{
	const char* formlist[] = {"Shrubbery", "Robotomy", "Presidential"};
	AForm* (Intern::*makeforms[3])(const std::string target) = {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidential
	};
	for (int i = 0; i < 3; i++)
	{
		if (name == formlist[i])
			return (this->*makeforms[i])(target);
	}
	throw (std::runtime_error("Intern couldn't find form: " + name));
}

AForm* Intern::makeShrubbery(std::string target)
{
	std::cout << "Intern creates " << target << " Shrubbery form" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotomy(std::string target)
{
	std::cout << "Intern creates " << target << " Robotomy form" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makePresidential(std::string target)
{
	std::cout << "Intern creates " << target << " Presidential form" << std::endl;
	return (new PresidentialPardonForm(target));
}