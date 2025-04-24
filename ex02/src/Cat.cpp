/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:19:47 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/24 12:01:07 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat: constructed" << std::endl;
	m_type = "Cat";
	m_brain = new Brain();
}

Cat::~Cat( void )
{
	std::cout<< "Cat: destructed" << std::endl;
	delete m_brain;
}

Cat::Cat(const Cat& orig) : Animal(orig)
{
	std::cout << "Cat: copy contructor called" << std::endl;
	m_brain = new Brain();
	*m_brain = *(orig.m_brain);
}

Cat& Cat::operator = (const Cat& orig)
{
	if (this != &orig)
	{
		std::cout << "Cat: copy assignment operator called" << std::endl;
		Animal::operator=(orig);
		*this->m_brain = *orig.m_brain;
	}
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "Purrrrrnauw" << std::endl;
}