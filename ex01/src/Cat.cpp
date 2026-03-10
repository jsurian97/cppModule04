/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:58:26 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 17:39:55 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():
	Animal("Cat")
{
	std::cout << "Constructor Cat called" << std::endl;
	this->_CatBrain = new Brain;
}

Cat::Cat(const Cat& source):
	Animal(source)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = source;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
	delete this->_CatBrain;
}

Cat& Cat::operator= (const Cat& source)
{
	std::cout << "Copy assignement operator Cat called" << std::endl;
	this->_type = source._type;
	this->_CatBrain = source._CatBrain;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Im a cat and I miouuuuw" << std::endl;
}

void	Cat::setBrain(std::string idea, int i)
{
	this->_CatBrain->setIdeas(idea, i);
}

void 	Cat::printIdeas()
{
	this->_CatBrain->printAllIdeas();
}
