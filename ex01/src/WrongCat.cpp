/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:38:38 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/24 12:02:23 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat: constructed" << std::endl;
	m_type = "WrongCat";
}

WrongCat::~WrongCat( void )
{
	std::cout<< "WrongCat: destructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& orig) : WrongAnimal(orig)
{
	std::cout << "WrongCat: copy contructor called" << std::endl;
	*this = orig;
}

WrongCat&	WrongCat::operator = (const WrongCat& orig)
{
	if (this  != &orig)
	{
		std::cout << "WrongCat: copy assignment operator called" << std::endl;
		this->m_type = orig.m_type;
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Purrrrrnauw" << std::endl;
}