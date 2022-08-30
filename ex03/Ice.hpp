/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:00:52 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:41:33 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(/* args */);		
		Ice(const Ice& copy);
		Ice &operator=(const Ice &copy);
		virtual ~Ice();
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

std::ostream&	operator<<(std::ostream& stream, ICharacter const &copy);