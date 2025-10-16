/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 03:05:08 by buddy2            #+#    #+#             */
/*   Updated: 2025/10/16 03:07:51 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* on success faz barulho de broca tem 50/50 de lobotomia no bureacrat */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request", 72, 45), target("Random President")
{
	std::cout << "Default Robotomy Request Form constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string ntarget): AForm("Robotomy Request", 72, 45), target(ntarget)
{
	std::cout << "Robotomy Request Form targeting " << getTarget() << " has been constructed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy), target(copy.target)
{
	std::cout << "Robotomy Request Form targeting " << getTarget() << " has been constructed for a copy" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{	
	this->target = copy.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Request Form targeting " << getTarget() << " has been destroyed" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (target);
}