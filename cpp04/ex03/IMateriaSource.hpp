/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:38:39 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 15:01:47 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__

# pragma once
# include "header.hpp"

class	IMateriaSource
{
	public:

		virtual ~IMateriaSource() {}
		virtual void	learnMateria( AMateria * other) = 0;
		virtual AMateria	*createMateria( std::string const & type ) = 0;
};

#endif
