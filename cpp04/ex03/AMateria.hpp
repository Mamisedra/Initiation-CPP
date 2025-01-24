/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:55:33 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 15:14:05 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

# pragma once

# include <string>
# include "header.hpp"

class	AMateria
{
	public:

		AMateria( void );
		AMateria( const std::string & type);
		AMateria( const AMateria & other );
		AMateria	&operator=( const AMateria & other );
		std::string const & getType( void ) const;
		virtual	~AMateria( void );
		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);

	protected:

		std::string	type_;
};

#endif
