/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:37:39 by sniemela          #+#    #+#             */
/*   Updated: 2025/04/23 15:39:18 by sniemela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain( void );
		~Brain( void );
		Brain (const Brain& orig);
		Brain& operator = (const Brain& orig);
};