/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinda-si <dinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:18:47 by buddy2            #+#    #+#             */
/*   Updated: 2025/05/10 14:32:24 by dinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog* dog = new Dog();
	Cat* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	WrongAnimal* wrong_animal = new WrongAnimal();
	WrongAnimal* wrong_cat = new WrongCat();
	wrong_cat->makeSound();
	wrong_animal->makeSound();
	delete wrong_cat;
	delete wrong_animal;
	delete cat;
	delete dog;
	std::cout << std::endl;
	std::cout << "Brain test" << std::endl;
	std::cout << std::endl;
	Cat* cat2 = new Cat();
	cat2->getBrain()->setIdeas("comida");
	cat2->speakUp(0);
	cat2->getBrain()->setIdeas("mais comida");
	cat2->speakUp(1);
	cat2->speakUp(0);
	delete cat2;
	return 0;
}