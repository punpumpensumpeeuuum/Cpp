/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:20:29 by dinda-si          #+#    #+#             */
/*   Updated: 2025/10/14 21:46:29 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();
	
		
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			setGrade(int);
		void			increaseGrade(void);
		void			decreaseGrade(void);
		void			signForm(Form &form);

	class GradeTooHighException : public std::exception 
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception 
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &bureaucrat);

#endif