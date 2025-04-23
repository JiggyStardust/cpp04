/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:27:00 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/23 16:09:13 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* m_brain;

	public:
		Dog( void );
		~Dog( void );
		Dog(const Dog& orig);
		Dog& operator = (const Dog& orig);

	void	makeSound( void ) const override;
	std::string getType( void ) const;
};