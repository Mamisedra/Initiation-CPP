/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:10:58 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 13:15:20 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# pragma once
# include "header.hpp"

class	Dog : public AAnimal
{
	public :

		Dog( void );
		Dog( const Dog & other );
		Dog	&operator=( const Dog & other );
		~Dog( void );
		void	makeSound( void ) const;

	private :

		Brain	*_brain;
};

#endif
