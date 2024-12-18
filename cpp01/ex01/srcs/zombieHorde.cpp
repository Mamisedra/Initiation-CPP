/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:42:56 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 10:01:59 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie*	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i] = Zombie(name);
	return (horde);
}