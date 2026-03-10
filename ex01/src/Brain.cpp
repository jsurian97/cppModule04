/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:36:24 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 17:03:36 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(const Brain& source)
{
	std::cout << "Copy constructor Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = source._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}

Brain& Brain::operator= (const Brain& source)
{
	std::cout << "Copy assignement Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = source._ideas[i];
	return *this;
}
