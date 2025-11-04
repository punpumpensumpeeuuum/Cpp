/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:20:31 by dinda-si          #+#    #+#             */
/*   Updated: 2025/10/16 16:20:21 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): name("Random"), grade(150)
{
	std::cout << "Default Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string namep, int gradep) : name(namep)
{
	if (gradep > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (gradep < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->grade = gradep;
		std::cout << "A Bureaucrat named " << name << " with a grade " << grade << " has beed constructed" << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.getName() + " copy")
{
	this->grade = copy.getGrade();
	std::cout << "A Bureaucrat named " << name << " with a grade " << grade << " has beed constructed from a copy" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	this->grade = copy.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "A Bureaucrat named " << name << " with a grade " << grade << " has beed destroyed" << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::setGrade(int i)
{
	if (i < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (i > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = i;
	std::cout << "Bureaucrat named " << name << ", grade was set to " << i << std::endl;
}

void	Bureaucrat::increaseGrade(void)
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->grade--;
		std::cout << "Bureaucrat named " << name << ", grade was increased to " << grade << std::endl; 
	}
}

void	Bureaucrat::decreaseGrade(void)
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->grade++;
		std::cout << "Bureaucrat named " << name << ", grade was decreased to " << grade << std::endl; 
	}
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << "Bureaucrat named " << bureaucrat.getName() << " has a grade " << bureaucrat.getGrade();
	return (o);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

void	Bureaucrat::signForm(AForm &form)
{
	form.beSinged(*this);
	if (form.getSign())
		std::cout << *this << " signed " << form << std::endl;	
	else
		std::cout << *this << " couldn't sign " << form << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try 
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch ( std::exception &e)
	{
		std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
