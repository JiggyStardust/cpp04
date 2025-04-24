/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:18:40 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/24 12:02:02 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* m_brain;

	public:
		Cat( void );
		~Cat( void );
		Cat(const Cat& orig);
		Cat& operator = (const Cat& orig);

	void	makeSound( void ) const override;
};