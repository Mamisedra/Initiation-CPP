/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:14:18 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 10:04:14 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap/includes/ClapTrap.hpp"
#include "includes/DiamondTrap.hpp"
#include <iostream>

int	main( void )
{
	DiamondTrap	Diams("Anarana");
	DiamondTrap test = Diams;

	Diams.whoAmI();
	test.classAttribut();
	test.attack("teast");
	test.whoAmI();
	return (0);
}
