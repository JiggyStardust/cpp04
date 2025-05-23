/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:23:28 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/24 10:20:29 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string m_type;

	public:
		Animal( std::string type = "Animal");
		virtual ~Animal( void );
		Animal( const Animal& orig);
		Animal& operator = ( const Animal& orig);

		std::string getType( void ) const;
		virtual void makeSound( void ) const;
};