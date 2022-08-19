/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:31:42 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:31:42 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal()
{
	std::cout << "WrongCat Copy constructor" << std::endl;
	operator=(copy);
}

WrongCat::~WrongCat()
{
	std::cout <<  "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound()
{
	std::cout << "Mehoooooooow" << std::endl;
}

Brain* WrongCat::getBrain() const
{
	return this->_brain;
}