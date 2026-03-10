/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:40:47 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 15:18:31 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():
	Animal("Dog")
{
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(const Dog& source):
	Animal(source)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = source;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}

Dog& Dog::operator= (const Dog& source)
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	this->_type = source._type;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Im a dog and I waffwaff" << std::endl;
}
