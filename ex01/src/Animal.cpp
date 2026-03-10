/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:34:56 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 17:44:39 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::Animal(std::string name):
	_type(name)
{
	std::cout << "Constructor parameters Animal called" << std::endl;
}

Animal::Animal(const Animal& source)
{
	std::cout << "Copy constructor Animal called" << std::endl;
	*this = source;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

Animal& Animal::operator= (const Animal& source)
{
	std::cout << "Copy assignment operator Animal called" << std::endl;
	this->_type = source._type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}
