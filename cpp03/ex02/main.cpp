/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:13:19 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 10:03:00 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap/includes/ClapTrap.hpp"
#include "includes/FragTrap.hpp"

int	main( void )
{
	ClapTrap	clap("Clap-killer");
	FragTrap	frag("Frag-killer");
	FragTrap	test;


	test = FragTrap("Zombie");
	frag.attack("Enemi");
	clap.attack("Enemi");
	for (int i = 0; i < 100; i++)
	{
		std::cout << "id = " << i << " ";
		frag.attack("Major");
	}
	frag.beRepaired(10);
	frag.takeDamage(100);
	frag.takeDamage(10);
	frag.highFivesGuys();
	clap.takeDamage(10);
	frag.highFivesGuys();
	return (0);
}
