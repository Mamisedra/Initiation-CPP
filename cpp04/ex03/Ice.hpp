/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:28:05 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 15:39:34 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

# pragma once

# include "header.hpp"

class	Ice : public AMateria
{
	public:

		Ice( void );
		Ice( const Ice & other );
		Ice	&operator=( const Ice & other );
		~Ice( void );
		AMateria	*clone( void ) const;

	private:
};
#endif
