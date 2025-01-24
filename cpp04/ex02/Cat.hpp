/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:00:28 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 13:15:13 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# pragma once
#include "AAnimal.hpp"
# include "header.hpp"

class	Cat : public AAnimal
{
	public :

		Cat( void );
		Cat( const Cat & other );
		Cat	&operator=( const Cat & other );
		~Cat( void );
		void	makeSound( void ) const;

	private :

		Brain	*_brain;

};
#endif
