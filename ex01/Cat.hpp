/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:32:02 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:32:02 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(/* args */);
		Cat(const Cat& copy);
		~Cat();
		virtual void makeSound() const;
		virtual Brain* getBrain() const;
		Cat		&operator=( Cat const &copy );

	private :
		Brain*	_brain;
};
