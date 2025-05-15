/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:47 by buddy2            #+#    #+#             */
/*   Updated: 2025/05/11 20:15:08 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Cat* cat2 = new Cat();
	Cat* cat3 = NULL;
	cat2->getBrain()->setIdeas("comida");
	cat2->speakUp(0);
	cat2->getBrain()->setIdeas("mais comida");
	cat2->speakUp(1);
	cat2->speakUp(0);
	*cat3 = *cat2;
		delete cat2;
	cat3->speakUp(1);
	return 0;
}