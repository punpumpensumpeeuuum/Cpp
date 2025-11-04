/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:20:29 by dinda-si          #+#    #+#             */
/*   Updated: 2025/10/16 17:10:13 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				sign;
		const int			sigrade;
		const int			exgrade;
	public:
		AForm();
		AForm(std::string cname, const int csigrade, const int cexgrade);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);
		virtual ~AForm() = 0;

		std::string getName() const;
		bool		getSign() const;
		int			getSiGrade() const;
		int			getExGrade() const;
		void		beSinged(const Bureaucrat& bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;

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
	class FormNotSigned : public std::exception 
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, AForm const &Aform);

#endif