/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:21:57 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:14:24 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
	private:
		/* data */
	public:
		IMateriaSource(/* args */);		
		IMateriaSource(const IMateriaSource& copy);
		IMateriaSource &operator=(const IMateriaSource &copy);
		virtual ~IMateriaSource() {};
		
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

IMateriaSource::IMateriaSource(/* args */)
{
}

IMateriaSource::~IMateriaSource()
{
}
