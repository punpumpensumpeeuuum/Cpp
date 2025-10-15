/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:09:27 by buddy2            #+#    #+#             */
/*   Updated: 2025/10/15 01:29:33 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("Random"), sign(false), sigrade(150), exgrade(150)
{
	std::cout << "Default Form constructor" << std::endl;
}

Form::Form(std::string cname, const int csigrade, const int cexgrade): name(cname), sign(false), sigrade(csigrade), exgrade(cexgrade)
{
	std::cout << "A Form named " << name << " with a grade to sign " << sigrade << " and a grade to execute " << exgrade << " has beed constructed" << std::endl;
	if (sigrade > 150)
		throw Form::GradeTooLowException();
	if (sigrade < 1)
		throw Form::GradeTooHighException();
	if (exgrade > 150)
		throw Form::GradeTooLowException();
	if (exgrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &copy) : name(copy.getName() + " copy"), sign(copy.sign), sigrade(copy.sigrade), exgrade(copy.exgrade)
{
	std::cout << "A Form named " << name << " with a grade to sign " << sigrade << " and a grade to execute " << exgrade << " has beed constructed from a copy" << std::endl;
}

Form &Form::operator=(Form const &copy)
{
	sign = copy.sign;
	return (*this);
}

Form::~Form()
{
	std::cout << "A Form named " << name << " with a grade to sign " << sigrade << " and a grade to execute " << exgrade << " has beed destroyed" << std::endl;
}

std::string	Form::getName() const
{
	return (name);
}

bool	Form::getSign() const
{
	return (sign);
}

int	Form::getSiGrade() const
{
	return (sigrade);
}

int Form::getExGrade() const
{
	return (exgrade);
}

void	Form::beSinged(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > sigrade)
		throw (GradeTooLowException());
	sign = true;
}

std::ostream	&operator<<(std::ostream &o, Form const &form)
{
	o << "Form named " << form.getName() << " has a grade to sign " << form.getSiGrade() << ", a grade to execute " << form.getExGrade() << " and sign = " << std::boolalpha << form.getSign();
	return (o);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}
