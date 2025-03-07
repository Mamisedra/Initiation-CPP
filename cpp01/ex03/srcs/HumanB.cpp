/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:48:50 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 13:52:08 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::~HumanB( void )
{
	return ;
}

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL)
{
	return ;
}

void	HumanB::setWeapon( Weapon& weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack( void )
{
	std::cout	<< _name << " "
				<< "attack with their" << " "
				<< _weapon->getType() << std::endl;
}