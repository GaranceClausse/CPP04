/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:32:13 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:32:13 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() : _type("")
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(Animal const& copy)
{
	std::cout << "Animal Copy constructor" << std::endl;
	*this=(copy);
}

Animal::~Animal()
{
	std::cout << "Animal " << _type << " Destructor called" << std::endl;
}

Animal&	Animal::operator=(Animal const& copy)
{
	std::cout << "Animal Operator = " << std::endl;
	_type = copy.getType();
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Weird animal noise... Perhaps a Unicorne?" << std::endl;
}

const std::string	&Animal::getType() const
{
	return (this->_type);
}

std::ostream&	operator<<(std::ostream& stream, Animal const &copy)
{
	stream << copy.getType();
	return (stream);
}