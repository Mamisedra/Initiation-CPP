/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:59:00 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/20 14:46:30 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScavTrap.hpp"

int	main( void )
{
	ScavTrap	test("Killer2");

	test.attack("Bot");
	test.guardGate();
}
