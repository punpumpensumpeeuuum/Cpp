/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:12:29 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/10 14:32:56 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain	*brain;
		std::string	name;
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &src);
		~Dog();
	
		void		makeSound(void) const;
		std::string	getType(void) const;
		Brain		*getBrain(void) const;
		void		speakUp(unsigned int i);
};

#endif