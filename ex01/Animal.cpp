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
	std::cout << COLOR B_GREEN "Animal Constructor called"  COLOR RESET << std::endl;
}

Animal::Animal(Animal const& copy)
{
	std::cout << COLOR B_GREEN "Animal Copy constructor"  COLOR RESET << std::endl;
	*this=(copy);
}

Animal::~Animal()
{
	std::cout << COLOR B_GREEN "Animal Destructor called"  COLOR RESET << std::endl;
}

Animal&	Animal::operator=(Animal const& copy)
{
	std::cout << COLOR GREEN "Animal Operator = "  COLOR RESET << std::endl;
	_type = copy.getType();
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << COLOR GREEN "Weird animal noise... Perhaps a Unicorne?"  COLOR RESET << std::endl;
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

