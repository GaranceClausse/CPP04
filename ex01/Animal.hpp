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

#define COLOR "\033[;"
#define RED "31m"
#define GREEN "32m"
#define YELLOW "33m"
#define BLUE "34m"
#define MAGENTA "35m"
#define CYAN "36m"
#define B_RED "41m"
#define B_GREEN "42m"
#define B_YELLOW "43m"
#define B_BLUE	"44m"
#define RESET "\033[0m"

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal(/* args */);	
		Animal(const Animal& copy);

		Animal &operator=(const Animal &copy);
		
		virtual ~Animal();
		const std::string	&getType() const;
		virtual void	makeSound() const;
};

std::ostream    &operator<<(std::ostream &output, Animal const &animal);
