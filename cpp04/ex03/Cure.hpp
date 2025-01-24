/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:41:28 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 15:45:15 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

# pragma once

# include "header.hpp"

class	Cure : public AMateria
{
	public:

		Cure( void );
		Cure( const Cure & other );
		Cure	&operator=( const Cure & other );
		~Cure( void );
		AMateria	*clone( void ) const;

	private :
};

#endif
