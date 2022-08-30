/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:20:26 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 16:00:03 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string const &_name) : _name(_name), _inventory_size(0)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = nullptr;
	}
}

Character::Character(const Character& copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = copy;	
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < _inventory_size; i++)
		delete this->_inventory[i];
}

Character &Character::operator=(const Character &copy)
{
	this->_name = copy._name;
	std::cout << "Character operator = called" << std::endl;
	return *this;
	
}

std::string const & getName() const
{
	return this->_name;
}