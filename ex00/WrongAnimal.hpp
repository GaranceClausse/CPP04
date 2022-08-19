/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:22:37 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 13:22:37 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(/* args */);	
		WrongAnimal(const WrongAnimal& copy);

		WrongAnimal &operator=(const WrongAnimal &copy);
		
		virtual ~WrongAnimal();
		const std::string	&getType() const;
		void	makeSound();
};

std::ostream    &operator<<(std::ostream &output, WrongAnimal const &WrongAnimal);