/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:43:04 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 10:00:28 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main( void )
{
	Zombie*	Horde;

	Horde = zombieHorde(10, "Foo");
	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << " - ";
		Horde[i].announce();
	}
	delete[] (Horde);
	return (0);
}