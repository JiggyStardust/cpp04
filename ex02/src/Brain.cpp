/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:37:46 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/23 16:20:44 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain: constructed" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain: destructed" << std::endl;
}

Brain::Brain( const Brain& orig)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = orig.ideas[i];
	}
}

Brain& Brain::operator = ( const Brain& orig)
{
	if (this != &orig)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = orig.ideas[i];
		}
	}
	return (*this);
}