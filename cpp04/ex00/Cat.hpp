/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:12:29 by dinda-si          #+#    #+#             */
/*   Updated: 2025/05/08 18:32:50 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		std::string	name;
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &src);
		~Cat();
	
		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif