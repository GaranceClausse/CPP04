/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:54:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:54:07 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	int	nb_animals = 20;
	const Animal* meta[nb_animals];

	for(int i = 0; i < nb_animals; i++)
	{
		if (i % 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for(int i = 0; i < nb_animals; i++)
	{
		std::cout << "Type of Animal : " << meta[i]->getType() << std::endl;
		std::cout << "Animal makes : ";
		meta[i]->makeSound();
		std::cout << std::endl;

	}
	std::cout << std::endl;
/*
	std::cout << "The Cat makes : ";
	i->makeSound(); //will output the cat sound!
	std::cout << "The Dog makes : ";
	j->makeSound();
	std::cout << "The Animal makes : ";
	meta->makeSound();
	std::cout << "" << std::endl;
	delete j;
	std::cout << "" << std::endl;

	std::cout << "**************************************************************" << std::endl;

	

	
	std::cout << "Now, if I say that the Dog is a Cat..." << std::endl;
	std::cout << "" << std::endl;

	j = new Cat();
	std::cout << "Type of Dog : " << j->getType() << " " << std::endl;
	std::cout << "Type of Cat : " <<  i->getType() << " " << std::endl;
	std::cout << "" << std::endl;

	std::cout << "The Cat makes : ";
	i->makeSound(); //will output the cat sound!
	std::cout << "The Dog makes : ";
	j->makeSound();
	std::cout << "The Animal makes : ";
	meta->makeSound();
	std::cout << "" << std::endl;
	
	delete i;	
	delete j;
	delete meta;
	std::cout << "" << std::endl;

	std::cout << "**************************************************************" << std::endl;

	std::cout << "Now let's check if the makenoise function isn't virtual" << std::endl;
	std::cout << "" << std::endl;

	WrongAnimal* wrongmeta = new WrongAnimal();
	WrongAnimal* wrongi = new WrongCat();
	std::cout << "" << std::endl;

	std::cout << "Type of WrongCat : " <<  wrongi->getType() << " " << std::endl;
	std::cout << "" << std::endl;

	std::cout << "The WrongCat makes : ";
	wrongi->makeSound();

	std::cout << "The WrongAnimal makes : ";
	wrongmeta->makeSound();
	std::cout << "" << std::endl;

	
	delete wrongi;
	delete wrongmeta;*/

	for(int i = 0; i < nb_animals; i++)
	{
		delete meta[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Show this is a deeep copy" << std::endl;
	std::cout << std::endl;
	Cat* cat = new Cat();
	Cat* proof = cat;

	std::cout << cat->getBrain() << std::endl;
	std::cout << proof->getBrain() << std::endl;
	delete cat;

	std::cout << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Show a shallow copy" << std::endl;
	std::cout << std::endl;
	WrongCat* wrongcat = new WrongCat();
	WrongCat* proof2 = wrongcat;

	std::cout << wrongcat->getBrain() << std::endl;
	std::cout << proof2->getBrain() << std::endl;
	delete wrongcat;

	return 0;
}