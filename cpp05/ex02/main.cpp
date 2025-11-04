/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:20:07 by dinda-si          #+#    #+#             */
/*   Updated: 2025/11/04 13:35:33 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat			 	Alfred("Alfred", 10);
		ShrubberyCreationForm   Tree("Tree");
		Alfred.signForm(Tree);
		Alfred.executeForm(Tree);

	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}		
	try
	{
		Bureaucrat		  	Maluco("Maluco", 40);
		RobotomyRequestForm	Robot("Bipbop");
		Maluco.signForm(Robot);
		Maluco.executeForm(Robot);
		
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat				President("President", 5);
		PresidentialPardonForm  ceo("ceo");
		President.signForm(ceo);
		President.executeForm(ceo);
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}