/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:19:47 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/30 15:59:13 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		int	_inventory_size;
		std::string	_name;
		AMateria	*_inventory[4];
		
	public:
		Character(std::string const &_name);		
		Character(const Character& copy);

		Character &operator=(const Character &copy);
		virtual ~Character() {}
				
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};
