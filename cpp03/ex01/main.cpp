/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:59:00 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/05 15:32:46 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScavTrap.hpp"

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
	ScavTrap	test("Killer2");

	print_attribut(test);
	test.attack("Bot");
	test.guardGate();
	print_attribut(test);
	test.attack("Bot");
	test.guardGate();
	print_attribut(test);
	test.attack("Bot");
	test.guardGate();
	print_attribut(test);
	test.attack("Bot");
	test.guardGate();
}
