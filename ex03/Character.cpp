/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:20:26 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/01 15:01:09 by gclausse         ###   ########.fr       */
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
	for (int i = 0; i < _inventory_size; i++)
		delete _inventory[i];
	this->_inventory_size = copy._inventory_size;
	for (int i = 0; i < _inventory_size; i++)
		this->equip(copy._inventory[i]->clone());	
	std::cout << "Character operator = called" << std::endl;
	return *this;
	
}

void Character::equip(AMateria* m)
{
	if (_inventory_size < 4 && m)
		_inventory[_inventory_size++] = m;
	else
	{
		std::cout << "Problem, you can't equip" << std::endl;
		return ;
	}
}


void Character::unequip(int idx)
{
	if (idx < 0 || idx > _inventory_size || _inventory[idx] == nullptr)
	{
		std::cout << "Problem, you can't unequip" << std::endl;
		return ;
	}
	while (idx < _inventory_size)
	{
		_inventory[idx] = _inventory[idx + 1];
		_inventory[idx + 1] = nullptr;
		idx++;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > _inventory_size || _inventory[idx] == nullptr)
	{
		std::cout << "Problem, you can't use your Materia" << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
	return this->_name;
}