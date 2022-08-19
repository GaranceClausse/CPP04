/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:31:24 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:31:24 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog(/* args */);
		Dog(const Dog& copy);
		~Dog();
		virtual void makeSound() const;
		Brain *getBrain() const;
		Dog		&operator=( Dog const &copy );

	private :
		Brain*	_brain;
};
