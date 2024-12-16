/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:36:15 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/16 17:37:09 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main( void )
{
	Zombie	*zombie;

	zombie = newZombie("Foo");
	zombie->announce();
	randomChump("Foo1");
	delete (zombie);
}