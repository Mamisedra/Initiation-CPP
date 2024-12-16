/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:00:08 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/16 17:26:42 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie*	new_zombie;

	new_zombie = new Zombie(name);
	return (new_zombie);
}