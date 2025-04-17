/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:19:47 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/17 12:19:47 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat( void )
{
	std::cout << "Cat: constructed" << std::endl;
	m_type = "Cat";
}

Cat::~Cat( void )
{
	std::cout<< "Cat: destructed" << std::endl;
}

Cat::Cat(const Cat& orig)
{
	std::cout << "Cat: copy contructor called" << std::endl;
	*this = orig;
}

Cat&	Cat::operator = (const Cat& orig)
{
	if (this  != &orig)
	{
		std::cout << "Cat: copy assignment operator called" << std::endl;
		this->m_type = orig.m_type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Purrrrrnauw" << std::endl;
}

std::string Cat::getType( void ) const
{
	return (m_type);
}
