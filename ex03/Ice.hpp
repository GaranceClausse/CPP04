/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:00:52 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:02:21 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice
{
	private:
		/* data */
	public:
		Ice(/* args */);
		virtual ~Ice();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

Ice::Ice(/* args */)
{
}

Ice::~Ice()
{
}

std::ostream&	operator<<(std::ostream& stream, ICharacter const &copy);