/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:51:20 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 15:56:05 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

#include "AMateria.hpp"
# pragma once

#include "header.hpp"

class	MateriaSource : public IMateriaSource
{
	public:

		MateriaSource( void );
		~MateriaSource( void );
		MateriaSource( const MateriaSource & other );
		MateriaSource	&operator=( const MateriaSource & other );
		void			learnMateria( AMateria * other);
		AMateria		*createMateria( std::string const & type );
};
#endif
