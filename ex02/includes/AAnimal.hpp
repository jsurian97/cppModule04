/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:32:17 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 18:48:03 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class	AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		AAnimal(std::string name);
		AAnimal(const AAnimal& source);
		virtual ~AAnimal();
		AAnimal& operator= (const AAnimal& source);

		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif
