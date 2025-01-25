/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:51:46 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/25 11:23:08 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4 ; i++)
	{
		this->_materia[i] = NULL;
	}
	return ;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4 ; i++)
	{
		delete this->_materia[i];
	}
	return ;
}

MateriaSource::MateriaSource( const MateriaSource & other )
{
	*this = other;
}

MateriaSource	&MateriaSource::operator=( const MateriaSource & other )
{
	for ( int i = 0; i < 4; i++)
	{
		this->_materia[i] = other._materia[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria( AMateria *other )
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = other;
			break ;
		}
		i++;
	}
}

AMateria	*MateriaSource::createMateria( const std::string & type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (0);
}
