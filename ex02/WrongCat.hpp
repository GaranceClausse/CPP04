/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:32:02 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:32:02 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAAnimal
{
	public:
		WrongCat(/* args */);
		WrongCat(const WrongCat& copy);
		~WrongCat();
		void makeSound();
		Brain* getBrain() const;
		
	private :
		Brain*	_brain;

};
