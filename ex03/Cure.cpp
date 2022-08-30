/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:59:56 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:40:33 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;	
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
	this->_type = copy._type;
	std::cout << "Cure operator = called" << std::endl;
	return *this;
	
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure(*this));
}

void use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds*" << std::endl;
}


std::ostream&	operator<<(std::ostream& stream, ICharacter const &copy)
{
	stream << copy.getName();
	return (stream);
}