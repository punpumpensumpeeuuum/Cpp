/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 03:05:08 by buddy2            #+#    #+#             */
/*   Updated: 2025/10/16 17:40:05 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* on success faz barulho de broca tem 50/50 de lobotomia no bureacrat */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <math.h>

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

void	RobotomyRequestForm::execute(Bureaucrat const & executor ) const
{
	if (!this->getSign())
		throw (AForm::FormNotSigned());
	if (executor.getGrade() > this->getExGrade())
		throw (AForm::GradeTooLowException());
	std::cout << "Brrrr brrrrr *drill drill*" << std::endl;
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotization has failed" << std::endl;
}
