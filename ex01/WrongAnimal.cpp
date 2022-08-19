/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:22:09 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 13:22:09 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
	std::cout << "WrongAnimal Copy constructor" << std::endl;
	*this=(copy);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& copy)
{
	std::cout << "WrongAnimal Operator = " << std::endl;
	_type = copy.getType();
	return (*this);
}

void	WrongAnimal::makeSound()
{
	std::cout << "Weird WrongAnimal noise... Perhaps a Unicorne?" << std::endl;
}

const std::string	&WrongAnimal::getType() const
{
	return (this->_type);
}

std::ostream&	operator<<(std::ostream& stream, WrongAnimal const &copy)
{
	stream << copy.getType();
	return (stream);
}