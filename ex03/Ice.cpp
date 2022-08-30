/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:00:32 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:41:09 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice() : AMateria("Ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria("Ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;	
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
	this->_type = copy._type;
	std::cout << "Ice operator = called" << std::endl;
	return *this;
	
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice(*this));
}

void use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << "*" << std::endl;
}


std::ostream&	operator<<(std::ostream& stream, ICharacter const &copy)
{
	stream << copy.getName();
	return (stream);
}