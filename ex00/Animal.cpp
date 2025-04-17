/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:36:53 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/17 11:03:48 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( std::string type ) : m_type(type)
{
	std::cout << "Animal typed " << m_type << " constructed" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal typed " << m_type << " destructed" << std::endl;
}

Animal::Animal( const Animal& orig)
{
	std::cout << "Copy constructor called for " << orig.m_type << std::endl;
	*this = orig;
}

Animal& Animal::operator = ( const Animal& orig)
{
	if (this != &orig)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->m_type = orig.m_type;
	}
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << " " << std::endl;
}

std::string Animal::getType( void ) const
{
	return (m_type);
}