/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:32:17 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 15:51:58 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal& source);
		virtual ~WrongAnimal();
		WrongAnimal& operator= (const WrongAnimal& source);

		std::string	getType(void) const;
		void	makeSound(void) const;
};

#endif
