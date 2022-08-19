/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:17:34 by gclausse          #+#    #+#             */
/*   Updated: 2022/08/19 15:17:34 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>


#define COLOR "\033[;"
#define RED "31m"
#define GREEN "32m"
#define YELLOW "33m"
#define BLUE "34m"
#define MAGENTA "35m"
#define CYAN "36m"
#define B_RED "41m"
#define B_GREEN "42m"
#define B_YELLOW "43m"
#define B_BLUE	"44m"
#define RESET "\033[0m"


class Brain
{
	public:
		Brain(/* args */);
		Brain(const Brain& copy);
		Brain &operator=(const Brain &copy);
		~Brain();
	
	private :
		std::string	ideas[100];
};
