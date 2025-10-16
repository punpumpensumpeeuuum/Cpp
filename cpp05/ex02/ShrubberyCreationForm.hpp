/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 03:08:12 by buddy2            #+#    #+#             */
/*   Updated: 2025/10/16 03:08:46 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm 
{
	private:
		std::string	target; 
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string ntarget);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();

		std::string		getTarget() const;
};

#endif
