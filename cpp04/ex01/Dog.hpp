/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:23:46 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 09:45:43 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# pragma once
# include "header.hpp"

class	Dog : public Animal
{
	public :

		Dog( void );
		Dog( const Dog & other );
		Dog	&operator=( const Dog & other);
		~Dog( void );
		void	makeSound( void ) const;

	protected :
	private :
		Brain	*_brain;
};

#endif
