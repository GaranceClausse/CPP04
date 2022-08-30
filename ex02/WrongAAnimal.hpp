/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAAnimal.hpp                                    :+:      :+:    :+:   */
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

class WrongAAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAAnimal(/* args */);	
		WrongAAnimal(const WrongAAnimal& copy);

		WrongAAnimal &operator=(const WrongAAnimal &copy);
		
		virtual ~WrongAAnimal();
		const std::string	&getType() const;
		void	makeSound();
};

std::ostream    &operator<<(std::ostream &output, WrongAAnimal const &WrongAAnimal);