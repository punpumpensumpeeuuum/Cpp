/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 03:05:45 by buddy2            #+#    #+#             */
/*   Updated: 2025/10/16 03:08:18 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
	private:
		std::string	target; 
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string ntarget);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();

		std::string		getTarget() const;
};

#endif
