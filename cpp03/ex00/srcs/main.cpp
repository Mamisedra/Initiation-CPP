/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:21:07 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/06 20:39:07 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main( void )
{
	ClapTrap	testclap;
	ClapTrap	clap("Killer");

	clap.attack("Monster");
	testclap.beRepaired(10);
	clap.takeDamage(5);
	clap.attack("a");
	clap.beRepaired(-1);
}
