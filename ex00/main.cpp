/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:06:34 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 15:52:31 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	i = new Cat();
	const Animal*	j = new Dog();

//	const WrongAnimal*	meta = new WrongAnimal();
//	const WrongAnimal*	i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete(meta);
	delete(j);
	delete(i);
	return (0);
}
