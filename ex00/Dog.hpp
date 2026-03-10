/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:36:43 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 15:18:22 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& source);
		~Dog();
		Dog& operator= (const Dog& source);

		void	makeSound(void) const;
};

#endif
