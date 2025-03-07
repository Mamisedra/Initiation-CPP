/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:59:00 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 09:59:07 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScavTrap.hpp"

int	main( void )
{
	ScavTrap	none;
	ScavTrap	test("Killer1");
	ScavTrap	test2("Killer2");
	ScavTrap	test1(ScavTrap("Killer3"));

	test1 =  test2;
	test.attack("Bot");
	test.guardGate();
	test.attack("Bot");
	test.guardGate();
	test.attack("Bot");
	test.guardGate();
	test.attack("Bot");
	test.guardGate();
	test.beRepaired(10);
	test.takeDamage(20);
}
