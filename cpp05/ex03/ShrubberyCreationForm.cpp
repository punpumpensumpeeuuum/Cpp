/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 03:08:05 by buddy2            #+#    #+#             */
/*   Updated: 2025/10/16 17:39:52 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* on sucess cria um ficheiro com o nome do bureaucrat e printa uma arvore bonita*/

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation", 145, 137), target("Random President")
{
	std::cout << "Default Shrubbery Creation Form constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string ntarget): AForm("Shrubbery Creation", 145, 137), target(ntarget)
{
	std::cout << "Shrubbery Creation Form targeting " << getTarget() << " has been constructed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): AForm(copy), target(copy.target)
{
	std::cout << "Shrubbery Creation Form targeting " << getTarget() << " has been constructed for a copy" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{	
	this->target = copy.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form targeting " << getTarget() << " has been destroyed" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor ) const  
{
	if (!this->getSign())
		throw (AForm::FormNotSigned());
	if (executor.getGrade() > this->getExGrade())
		throw (AForm::GradeTooLowException());
	std::string fileName = target + "_shrubbery";
	std::ofstream file(fileName.c_str());
	file << "       _-_        " << '\n'
		<< "    /~~   ~~)     " << '\n'
		<< " /~~         ~~)  " << '\n'
		<< "{               } " << '\n'
		<< " (   _-     -_  /  " << '\n'
		<< "   ~  \\ //  ~    " << '\n'
		<< "_- -   | | _- _   " << '\n'
		<< "  _ -  | |   -_   " << '\n'
		<< "      // \\       " << '\n'
		<< "	               " << '\n'
		<< "	    _-_        " << '\n'
		<< "    /~~   ~~)     " << '\n'
		<< " /~~         ~~)  " << '\n'
		<< "{               } " << '\n'
		<< " (   _-     -_  /  " << '\n'
		<< "   ~  \\ //  ~    " << '\n'
		<< "_- -   | | _- _   " << '\n'
		<< "  _ -  | |   -_   " << '\n'
		<< "      // \\       " << '\n'
		<< "	               " << '\n'
		<< "	    _-_        " << '\n'
		<< "    /~~   ~~)     " << '\n'
		<< " /~~         ~~)  " << '\n'
		<< "{               } " << '\n'
		<< " (   _-    -_  /  " << '\n'
		<< "   ~  \\ //  ~    " << '\n'
		<< "_- -   | | _- _   " << '\n'
		<< "  _ -  | |   -_   " << '\n'
		<< "      // \\       " << std::endl;
}

