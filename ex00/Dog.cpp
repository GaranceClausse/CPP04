/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:31:04 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:31:04 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const& copy) : Animal()
{
	std::cout << "Dog Copy constructor" << std::endl;
	operator=(copy);
}

Dog::~Dog()
{
	std::cout << "Dog " << _type << " Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Waouf Waouf" << std::endl;
}