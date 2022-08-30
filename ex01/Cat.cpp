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
	std::cout << COLOR B_RED "Cat Constructor called" COLOR RESET<< std::endl;	
	this->_brain = new Brain();
}

Cat::Cat(Cat const& copy) : Animal()
{
	std::cout << COLOR B_RED "Cat Copy constructor" COLOR RESET << std::endl;
	operator=(copy);
}

Cat		&Cat::operator=( Cat const &copy )
{
	std::cout << "Cat Assignement operator" << std::endl;
	this->_type = copy.getType();
	*(this->_brain) = *(copy.getBrain());
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << COLOR B_RED << _type << " Destructor called" COLOR RESET << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << COLOR RED "Mehoooooooow" COLOR RESET << std::endl;
}


Brain* Cat::getBrain() const
{
	return this->_brain;
}

