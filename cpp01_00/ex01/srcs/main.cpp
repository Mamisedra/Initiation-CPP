/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:43:04 by mranaivo          #+#    #+#             */
/*   Updated: 2025/02/18 10:34:33 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main( void )
{
	Zombie*	Horde;
	Zombie*	Horde1;

	Horde = zombieHorde(-1, "Foo");
	if (Horde)
	{
		for (int i = 0; i < 10; i++)
		{
			std::cout << i + 1 << " - ";
			Horde[i].announce();
		}
	}
	Horde1 = zombieHorde(10, "error");
	if (Horde1)
	{
		for (int i = 0; i < 10; i++)
		{
			std::cout << i + 1 << " - ";
			Horde1[i].announce();
		}
	}
	delete[] (Horde);
	delete[] (Horde1);
	return (0);
}

