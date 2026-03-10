/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:34:56 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 18:53:10 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Constructor Animal called" << std::endl;
}

AAnimal::AAnimal(std::string name):
	_type(name)
{
	std::cout << "Constructor parameters Animal called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& source)
{
	std::cout << "Copy constructor Animal called" << std::endl;
	*this = source;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

AAnimal& AAnimal::operator= (const AAnimal& source)
{
	std::cout << "Copy assignment operator Animal called" << std::endl;
	this->_type = source._type;
	return *this;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
