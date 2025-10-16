/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 02:40:43 by buddy2            #+#    #+#             */
/*   Updated: 2025/10/16 03:02:44 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/* on sucess printa q o bureacrat foi perdoado */

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon", 25, 5), target("Random President")
{
	std::cout << "Default Presidential Pardon Form constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string ntarget): AForm("Presidential Pardon", 25, 5), target(ntarget)
{
	std::cout << "Presidential Pardon Form targeting " << getTarget() << " has been constructed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm(copy), target(copy.target)
{
	std::cout << "Presidential Pardon Form targeting " << getTarget() << " has been constructed for a copy" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{	
	this->target = copy.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form targeting " << getTarget() << " has been destroyed" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (target);
}