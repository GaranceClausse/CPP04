/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:32:29 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 12:32:29 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal(/* args */);	
		Animal(const Animal& copy);

		Animal &operator=(const Animal &copy);
		
		~Animal();
		const std::string	&getType() const;
		virtual void	makeSound() const;
};

std::ostream    &operator<<(std::ostream &output, Animal const &animal);
