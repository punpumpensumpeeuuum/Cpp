/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:20:07 by dinda-si          #+#    #+#             */
/*   Updated: 2025/10/15 01:30:44 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	alo("Alo", 100);
		Form		contract("Contract", 100, 50);

		std::cout << alo << " " << contract << std::endl;
		alo.signForm(contract);
		std::cout << alo << " " << contract << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat	bomdia("Bomdia", 110);
		Form		formmmm("Formmmm", 5, 1);

		std::cout << bomdia << " " << formmmm << std::endl;
		bomdia.signForm(formmmm);
		std::cout << bomdia << " " << formmmm << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
}