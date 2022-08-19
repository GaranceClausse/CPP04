/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:17:14 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 15:17:14 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << COLOR B_YELLOW "Brain Constructor called" COLOR RESET << std::endl;
}

Brain::Brain(Brain const& copy)
{
	std::cout << COLOR B_YELLOW "Brain Copy constructor" COLOR RESET << std::endl;
	*this=(copy);
}

Brain::~Brain()
{
	std::cout << COLOR B_YELLOW "Brain Destructor called" COLOR RESET << std::endl;
}

Brain&	Brain::operator=(Brain const& copy)
{
	std::cout << "Brain Operator = " << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}