/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:34:06 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/17 14:39:03 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string m_type;

	public:
		WrongAnimal( std::string type = "");
		~WrongAnimal( void );
		WrongAnimal( const WrongAnimal& orig);
		WrongAnimal& operator = ( const WrongAnimal& orig);

		std::string getType( void ) const;
		void makeSound( void ) const;
};