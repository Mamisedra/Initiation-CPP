/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:42:59 by mranaivo          #+#    #+#             */
/*   Updated: 2025/02/18 10:56:33 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie( std::string name ): _name(name)
{
	return ;
}

Zombie::Zombie( void ){}

Zombie::~Zombie( void )
{
	return ;
}

void	Zombie::announce( void ) const
{
	std::cout	<< _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
