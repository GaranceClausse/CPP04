/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:58:14 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:33:53 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( const std::string &type ): _type(type)
{
	std::cout << "String constructor for AMateria called" << std::endl;
	return;
}

const std::string	&AMateria::getType( void ) const
{
	return this->_type;
}
