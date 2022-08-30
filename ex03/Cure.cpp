/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:59:56 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:02:52 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds*" << std::endl;
}


std::ostream&	operator<<(std::ostream& stream, ICharacter const &copy)
{
	stream << copy.getName();
	return (stream);
}