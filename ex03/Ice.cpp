/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:00:32 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:02:10 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

void use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << "*" << std::endl;
}


std::ostream&	operator<<(std::ostream& stream, ICharacter const &copy)
{
	stream << copy.getName();
	return (stream);
}