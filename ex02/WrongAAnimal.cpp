/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:22:09 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 13:22:09 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal() : _type("")
{
	std::cout << "WrongAAnimal Constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(WrongAAnimal const& copy)
{
	std::cout << "WrongAAnimal Copy constructor" << std::endl;
	*this=(copy);
}

WrongAAnimal::~WrongAAnimal()
{
	std::cout << "WrongAAnimal Destructor called" << std::endl;
}

WrongAAnimal&	WrongAAnimal::operator=(WrongAAnimal const& copy)
{
	std::cout << "WrongAAnimal Operator = " << std::endl;
	_type = copy.getType();
	return (*this);
}

void	WrongAAnimal::makeSound()
{
	std::cout << "Weird WrongAAnimal noise... Perhaps a Unicorne?" << std::endl;
}

const std::string	&WrongAAnimal::getType() const
{
	return (this->_type);
}

std::ostream&	operator<<(std::ostream& stream, WrongAAnimal const &copy)
{
	stream << copy.getType();
	return (stream);
}