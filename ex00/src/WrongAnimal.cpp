/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:36:25 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/24 10:21:25 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( std::string type ) : m_type(type)
{
	std::cout << "WrongAnimal typed " << m_type << " constructed" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal typed " << m_type << " destructed" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& orig)
{
	std::cout << "WrongAnimal: copy constructor called for " << orig.m_type << std::endl;
	*this = orig;
}

WrongAnimal& WrongAnimal::operator = ( const WrongAnimal& orig)
{
	if (this != &orig)
	{
		std::cout << "WrongAnimal: copy assignment operator called for " << orig.m_type << std::endl;
		this->m_type = orig.m_type;
	}
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "*inaudible*" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (m_type);
}