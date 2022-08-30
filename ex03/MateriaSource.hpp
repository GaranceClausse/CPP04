/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:23:24 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:15:08 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource
{
	private:
		/* data */
	public:
		MateriaSource(/* args */);
		MateriaSource(const MateriaSource& copy);
		MateriaSource &operator=(const MateriaSource &copy);
		~MateriaSource();
};

MateriaSource::MateriaSource(/* args */)
{
}

MateriaSource::~MateriaSource()
{
}
