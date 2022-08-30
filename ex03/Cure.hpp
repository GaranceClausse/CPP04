/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:00:13 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:34:55 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(/* args */);		
		Cure(const Cure& copy);
		Cure &operator=(const Cure &copy);
		virtual ~Cure();
		
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

std::ostream&	operator<<(std::ostream& stream, ICharacter const &copy);