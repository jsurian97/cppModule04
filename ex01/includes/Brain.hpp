/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian42 <jsurian@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:15:38 by jsurian42         #+#    #+#             */
/*   Updated: 2026/03/10 17:31:41 by jsurian42        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain& source);
		~Brain();
		Brain& operator= (const Brain& source);
		void	printAllIdeas();
		void	setIdeas(std::string idea, int i);
};

#endif
