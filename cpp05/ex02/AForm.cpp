/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:09:27 by buddy2            #+#    #+#             */
/*   Updated: 2025/10/16 01:17:53 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): name("Random"), sign(false), sigrade(150), exgrade(150)
{
	std::cout << "Default AForm constructor" << std::endl;
}

AForm::AForm(std::string cname, const int csigrade, const int cexgrade): name(cname), sign(false), sigrade(csigrade), exgrade(cexgrade)
{
	std::cout << "A AForm named " << name << " with a grade to sign " << sigrade << " and a grade to execute " << exgrade << " has beed constructed" << std::endl;
	if (sigrade > 150)
		throw AForm::GradeTooLowException();
	if (sigrade < 1)
		throw AForm::GradeTooHighException();
	if (exgrade > 150)
		throw AForm::GradeTooLowException();
	if (exgrade < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &copy) : name(copy.getName() + " copy"), sign(copy.sign), sigrade(copy.sigrade), exgrade(copy.exgrade)
{
	std::cout << "A AForm named " << name << " with a grade to sign " << sigrade << " and a grade to execute " << exgrade << " has beed constructed from a copy" << std::endl;
}

AForm &AForm::operator=(AForm const &copy)
{
	sign = copy.sign;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "A AForm named " << name << " with a grade to sign " << sigrade << " and a grade to execute " << exgrade << " has beed destroyed" << std::endl;
}

std::string	AForm::getName() const
{
	return (name);
}

bool	AForm::getSign() const
{
	return (sign);
}

int	AForm::getSiGrade() const
{
	return (sigrade);
}

int AForm::getExGrade() const
{
	return (exgrade);
}

void	AForm::beSinged(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > sigrade)
		throw (GradeTooLowException());
	sign = true;
}

std::ostream	&operator<<(std::ostream &o, AForm const &Aform)
{
	o << "AForm named " << Aform.getName() << " has a grade to sign " << Aform.getSiGrade() << ", a grade to execute " << Aform.getExGrade() << " and sign = " << std::boolalpha << Aform.getSign();
	return (o);
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}
