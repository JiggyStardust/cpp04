/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:33:00 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/17 14:56:27 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog: constructed" << std::endl;
	m_type = "Dog";
}

Dog::~Dog( void )
{
	std::cout << "Dog: destructed" << std::endl;
}

Dog::Dog(const Dog& orig) : Animal(orig)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = orig;
}

Dog& Dog::operator = (const Dog& orig)
{
	if (this != &orig)
	{
		std::cout  << "Dog: Copy assignment operator called" << std::endl;
		this->m_type = orig.m_type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout<< "Bork bork!" << std::endl;
}

std::string Dog::getType( void ) const
{
	return (m_type);
}