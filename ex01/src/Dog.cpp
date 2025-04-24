/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:33:00 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/24 12:02:20 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog: constructed" << std::endl;
	m_type = "Dog";
	m_brain = new Brain();
}

Dog::~Dog( void )
{
	std::cout << "Dog: destructed" << std::endl;
	delete m_brain;
}

Dog::Dog(const Dog& orig) : Animal(orig)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	m_brain = new Brain();
	*m_brain = *(orig.m_brain);
}

Dog& Dog::operator = (const Dog& orig)
{
	if (this != &orig)
	{
		std::cout  << "Dog: Copy assignment operator called" << std::endl;
		Animal::operator=(orig);
		*this->m_brain = *orig.m_brain;
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout<< "Bork bork!" << std::endl;
}