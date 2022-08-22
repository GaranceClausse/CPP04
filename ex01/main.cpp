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

	std::cout << "************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Show the brain" << std::endl;

	Cat *garfield = new Cat();

	*(garfield->getBrain()).setIdeas("Foooood");

	/*
	std::cout << "************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Show the brain" << std::endl;
	std::cout << std::endl;

	
	std::cout << proof->getBrain() << std::endl;
	delete cat;

	std::cout << std::endl;

	for(int i = 0; i < nb_animals; i++)
	{
		delete meta[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;


	std::cout << "************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Show _ideas" << std::endl;
	std::cout << std::endl;
	Cat* garfield = new Cat();

	garfield->getBrain()->set_ideas(_ideas[0]) = "I'm hungry";
	//std::cout << proof->getBrain() << std::endl;
	delete garfield;

	std::cout << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Show a shallow copy" << std::endl;
	std::cout << std::endl;
	WrongCat* wrongcat = new WrongCat();
	WrongCat* proof2 = wrongcat;

	std::cout << wrongcat->getBrain() << std::endl;
	std::cout << proof2->getBrain() << std::endl;
	delete wrongcat;*/

	return 0;
}