/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:06:34 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 16:28:37 by jsurian42        ###   ########.fr       */
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

	int sizeArray = 4;
	int	i = 0;
	Animal* array[sizeArray];

	while (i < sizeArray)
	{
		if (i % 2 == 0)
			array[i] = new Cat;
		else
			array[i] = new Dog;
		i++;
	}
	i = 0;
	while (i < sizeArray)
	{
		delete array[i];
		i++;
	}
	return (0);
}
