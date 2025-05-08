/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:12:29 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/08 18:32:53 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		std::string	name;
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &src);
		~Dog();
	
		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif