/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:40:47 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 18:53:40 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():
	AAnimal("Dog")
{
	std::cout << "Constructor Dog called" << std::endl;
	this->_DogBrain = new Brain;
}

Dog::Dog(const Dog& source):
	AAnimal(source)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = source;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	delete this->_DogBrain;
}

Dog& Dog::operator= (const Dog& source)
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	this->_type = source._type;
	delete this->_DogBrain;
	this->_DogBrain = new Brain(*source._DogBrain);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Im a dog and I waffwaff" << std::endl;
}
