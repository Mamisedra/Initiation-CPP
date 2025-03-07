/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:14:18 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 02:16:53 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap/includes/ClapTrap.hpp"
#include "includes/DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	Diams("Anarana");

	Diams.whoAmI();
	Diams.classAttribut();
	return (0);
}
