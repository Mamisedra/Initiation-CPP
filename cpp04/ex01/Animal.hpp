/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:13:48 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/23 16:20:36 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <string>
# pragma once

class	Animal
{
	public :

		Animal( void );
		Animal( const Animal & other );
		Animal	&operator=( const Animal & other );
		virtual ~Animal( void );
		virtual void	makeSound() const;
		std::string		getType( void ) const;

	protected :

		std::string	type;

};

#endif
