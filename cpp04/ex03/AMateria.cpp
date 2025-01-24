/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:55:09 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 15:17:50 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.hpp"

AMateria::AMateria( void ) : type_("Unknow")
{
	return ;
}

AMateria::AMateria( const std::string & type) : type_(type)
{
	return ;
}

AMateria::~AMateria( void )
{
	return ;
}

AMateria::AMateria( const AMateria & other )
{
	*this = other;
}

AMateria&	AMateria::operator=( const AMateria & other )
{
	return (*this);
}

std::string	const & AMateria::getType( void ) const
{
	return (this->type_);
}
