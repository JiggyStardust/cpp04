/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:18:40 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/17 12:18:53 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		~Cat( void );
		Cat(const Cat& orig);
		Cat& operator = (const Cat& orig);

	void	makeSound( void ) const override;
	std::string getType( void ) const;
};