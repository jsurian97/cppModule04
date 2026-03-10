/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:34:56 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 15:51:00 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name):
	_type(name)
{
	std::cout << "Constructor parameters WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& source)
{
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	*this = source;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& source)
{
	std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
	this->_type = source._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
