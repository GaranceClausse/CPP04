/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:32:13 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:32:13 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal() : _type("")
{
	std::cout << COLOR B_GREEN "AAnimal Constructor called"  COLOR RESET << std::endl;
}

AAnimal::AAnimal(AAnimal const& copy)
{
	std::cout << COLOR B_GREEN "AAnimal Copy constructor"  COLOR RESET << std::endl;
	*this=(copy);
}

AAnimal::~AAnimal()
{
	std::cout << COLOR B_GREEN "AAnimal Destructor called"  COLOR RESET << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const& copy)
{
	std::cout << COLOR GREEN "AAnimal Operator = "  COLOR RESET << std::endl;
	_type = copy.getType();
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << COLOR GREEN "Weird AAnimal noise... Perhaps a Unicorne?"  COLOR RESET << std::endl;
}

const std::string	&AAnimal::getType() const
{
	return (this->_type);
}

std::ostream&	operator<<(std::ostream& stream, AAnimal const &copy)
{
	stream << copy.getType();
	return (stream);
}