/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buddy2 <buddy2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:05:06 by dinda-si          #+#    #+#             */
/*   Updated: 2025/02/25 00:49:49 by buddy2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*brainPTR = &brain;
	std::string	&brainREF = brain;

	std::cout << "Address of string:\t" << &brain << std::endl;
	std::cout << "Address of stringPTR:\t" << &brainPTR << std::endl;
	std::cout << "Address of stringREF:\t" << &brainREF << std::endl;
	std::cout << std::endl;

	std::cout << "Value of string:\t\t" << brain <<std::endl;
	std::cout << "Value pointed to by stringPTR:\t" << brainPTR <<std::endl;
	std::cout << "Value of stringREF:\t\t" << brainREF <<std::endl;
	return (0);
}