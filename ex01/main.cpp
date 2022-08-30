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
	int	nb_animals = 6;
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
	std::cout << std::endl;

	(meta[4]->getBrain())->setIdeas("Fooood", 0);
	std::cout << meta[4]->getType() << " first idea is " << (meta[4]->getBrain())->getIdeas(0) << std::endl;
	(meta[4]->getBrain())->setIdeas("More fooood", 1);
	std::cout << meta[4]->getType() << " second idea is " << (meta[4]->getBrain())->getIdeas(1) << std::endl;
	(meta[4]->getBrain())->setIdeas("Cuddles?", 2);
	std::cout << meta[4]->getType() << " third idea is " << (meta[4]->getBrain())->getIdeas(2) << std::endl;
	std::cout << std::endl;

	std::cout << "************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Show this is a deep copy" << std::endl;
	std::cout << std::endl;
	Animal *firstCat = new Cat();
	Animal *copy = new Cat();

	(firstCat->getBrain())->setIdeas("Fooood", 0);
	std::cout <<"FirstCat first idea is : " << (firstCat->getBrain())->getIdeas(0) << std::endl;

	*copy = *firstCat;

	(copy->getBrain())->setIdeas("I wish I would be a dog", 0);
	std::cout << "Copy first idea is : " << (copy->getBrain())->getIdeas(0) << std::endl;
	std::cout << "FirstCat first idea didn't change and still is : " << (firstCat->getBrain())->getIdeas(0) << std::endl;
	
	delete firstCat;
	delete copy;
	std::cout << std::endl;

	std::cout << "************************************" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for(int i = 0; i < nb_animals; i++)
		delete meta[i];
	
	return 0;
}