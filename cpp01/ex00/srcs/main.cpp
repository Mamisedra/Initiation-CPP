/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:36:15 by mranaivo          #+#    #+#             */
/*   Updated: 2025/02/18 09:57:56 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main( void )
{
	Zombie	*zombie;
	Zombie	z2("Zombie-2");

	zombie = newZombie("Foo");
	zombie->announce();
	z2.announce();
	randomChump("Foo1");
	randomChump("Zombie-3");
	delete (zombie);
}
