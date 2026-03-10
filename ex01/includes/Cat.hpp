/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 13:55:57 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 17:39:06 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*_CatBrain;
	public:
		Cat();
		Cat(const Cat& source);
		~Cat();
		Cat& operator= (const Cat& source);

		void	makeSound(void) const;
		void	setBrain(std::string idea, int i);
		void	printIdeas();
};

#endif
