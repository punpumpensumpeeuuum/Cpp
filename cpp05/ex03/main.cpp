/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:20:07 by dinda-si          #+#    #+#             */
/*   Updated: 2025/11/04 17:04:45 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat b1("JUAN", 150);

	Intern intern;
	AForm* f1 = intern.makeForm("Shrubbery", "WHHAAAAAA");
	try 
	{
		f1->execute(b1);
		f1->beSinged(b1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	b1.setGrade(1);
	b1.signForm(*f1);
	b1.executeForm(*f1);
}