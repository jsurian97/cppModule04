/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:58:26 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 15:51:27 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():
	WrongAnimal("WrongCat")
{
	std::cout << "Constructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& source):
	WrongAnimal(source)
{
	std::cout << "Copy constructor WrongCat called" << std::endl;
	*this = source;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& source)
{
	std::cout << "Copy assignement operator WrongCat called" << std::endl;
	this->_type = source._type;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Im a wrongcat and I wrongmiouuuuw" << std::endl;
}
