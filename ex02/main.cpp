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
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "" << std::endl;
	std::cout << "Type of Dog : " << j->getType() << " " << std::endl;
	std::cout << "Type of Cat : " <<  i->getType() << " " << std::endl;
	std::cout << "" << std::endl;

	std::cout << "The Cat makes : ";
	i->makeSound(); //will output the cat sound!
	std::cout << "The Dog makes : ";
	j->makeSound();
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
	std::cout << "" << std::endl;
	
	delete i;	
	delete j;
	std::cout << "" << std::endl;

	std::cout << "**************************************************************" << std::endl;

	std::cout << "Now let's check if the makenoise function isn't virtual" << std::endl;
	std::cout << "" << std::endl;

	WrongAAnimal* wrongi = new WrongCat();
	std::cout << "" << std::endl;

	std::cout << "Type of WrongCat : " <<  wrongi->getType() << " " << std::endl;
	std::cout << "" << std::endl;

	std::cout << "The WrongCat makes : ";
	wrongi->makeSound();
	std::cout << "" << std::endl;

	
	delete wrongi;

	return 0;
}