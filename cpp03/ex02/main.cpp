/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:13:19 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/05 15:34:37 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap/includes/ClapTrap.hpp"
#include "includes/FragTrap.hpp"

static void	print_attribut(ClapTrap obj)
{
	std::cout << "Clap name : " << obj.getName()
		<< std::endl << "Clap point : " << obj.getPoint()
		<< std::endl << "Clap energy : " << obj.getEnergyPoint()
		<< std::endl << "Clap attack : " << obj.getAttackDamage()
		<< std::endl;
}

int	main( void )
{
	ClapTrap	clap("Clap-killer");
	FragTrap	frag("Frag-killer");

	frag.attack("Enemi");
	clap.attack("Enemi");
	frag.beRepaired(10);
	clap.takeDamage(10);
	frag.takeDamage(100);
	frag.highFivesGuys();
	return (0);
}
