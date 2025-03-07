/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:42:56 by mranaivo          #+#    #+#             */
/*   Updated: 2025/02/18 10:39:57 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <cstdlib>

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cerr << "Failed to create zombie "<< name <<std::endl;
		std::cerr << "The number of zombies must be greater than zero." <<std::endl;
		return (NULL);
	}
	Zombie*	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i] = Zombie(name);
	return (horde);
}
