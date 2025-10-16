/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 01:26:05 by buddy2            #+#    #+#             */
/*   Updated: 2025/10/16 17:37:15 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
	private:
		std::string	target; 
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string ntarget);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		std::string		getTarget() const;
		
		void	execute( Bureaucrat const & executor ) const;
};

#endif
