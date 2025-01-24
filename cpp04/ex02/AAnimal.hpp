/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:34:16 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 12:55:54 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__

#include <string>
# pragma once

class	AAnimal
{
	public :

		AAnimal( void );
		AAnimal( const AAnimal & other );
		AAnimal	&operator=( const AAnimal & other );
		virtual ~AAnimal( void );
		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;

	protected :

		std::string	type_;

	private :
};

#endif
