/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:00:13 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:02:30 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure
{
	private:
		/* data */
	public:
		Cure(/* args */);
		virtual ~Cure();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

Cure::Cure(/* args */)
{
}

Cure::~Cure()
{
}

std::ostream&	operator<<(std::ostream& stream, ICharacter const &copy);