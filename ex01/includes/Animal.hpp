/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:32:17 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 15:29:37 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal& source);
		virtual ~Animal();
		Animal& operator= (const Animal& source);

		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
