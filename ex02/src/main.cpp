/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:06:34 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 18:54:40 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
//	const Animal*	i = new Cat();
//	const Animal*	j = new Dog();
//
//	delete(j);
//	delete(i);

	//AAnimal akakak;

	int sizeArray = 4;
	int	i = 0;
	AAnimal* array[sizeArray];

	while (i < sizeArray)
	{
		if (i % 2 == 0)
			array[i] = new Cat;
		else
			array[i] = new Dog;
		i++;
	}
	while (i < sizeArray)
	{
		delete array[i];
		i++;
	}
	Cat a;
	Cat b;
	a.setBrain("idea0", 0);
	a.setBrain("idea1", 1);
	a.setBrain("idea2", 2);
	a.setBrain("idea3", 3);
	a.printIdeas();
	b = a;
	b.setBrain("changement", 0);
	a.printIdeas();
	b.printIdeas();
	return (0);
}
