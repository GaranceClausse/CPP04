/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:31:42 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:31:42 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const& copy) : Animal()
{
	std::cout << "Cat Copy constructor" << std::endl;
	operator=(copy);
}

Cat::~Cat()
{
	std::cout << "Cat " << _type << " Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Mehoooooooow" << std::endl;
}
