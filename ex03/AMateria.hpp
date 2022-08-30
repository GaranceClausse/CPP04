/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:58:48 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 14:13:33 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		/* data */
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria& copy);
		AMateria &operator=(const AMateria &copy);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		~AMateria();
};
