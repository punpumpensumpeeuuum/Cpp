/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:46:18 by dinda-si          #+#    #+#             */
/*   Updated: 2025/11/04 13:33:28 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
class AForm;
class Bureaucrat;

# include <iostream>

class Intern
{
	private:
		/* data */
	public:
			Intern();
			Intern(const Intern &copy);
			Intern &operator=(const Intern &copy);
			~Intern();
			
			AForm* makeForm(const std::string name, const std::string target);
			AForm* makeShrubbery(const std::string target);
			AForm* makeRobotomy(const std::string target);
			AForm* makePresidential(const std::string target);
};

#endif