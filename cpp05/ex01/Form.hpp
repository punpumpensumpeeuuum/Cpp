/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:20:29 by dinda-si          #+#    #+#             */
/*   Updated: 2025/10/14 21:55:05 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				sign;
		const int			sigrade;
		const int			exgrade;
	public:
		Form();
		Form(std::string cname, const int csigrade, const int cexgrade);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form();

		std::string getName() const;
		bool		getSign() const;
		int			getSiGrade() const;
		int			getExGrade() const;
		void		beSinged(const Bureaucrat& bureaucrat);

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

std::ostream	&operator<<(std::ostream &o, Form const &form);

#endif