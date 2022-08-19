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
	std::cout << COLOR B_BLUE "Dog Constructor called" COLOR RESET << std::endl;	
	this->_brain = new Brain;
}

Dog::Dog(Dog const& copy) : Animal(), _brain(NULL)
{
	std::cout << COLOR B_BLUE "Dog Copy constructor" COLOR RESET << std::endl;
	operator=(copy);
}

Dog		&Dog::operator=( Dog const &copy )
{
	std::cout << "Dog Assignement operator" << std::endl;
	this->_type = copy.getType();
	*(this->_brain) = *(copy._brain);
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout <<COLOR B_BLUE << _type << " Destructor called" COLOR RESET << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << COLOR BLUE "Waouf Waouf" COLOR RESET << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}