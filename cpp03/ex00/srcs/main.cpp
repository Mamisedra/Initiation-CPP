/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:21:07 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/20 12:52:02 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main( void )
{
	ClapTrap	clap("Killer");

	clap.attack("Monster");
	clap.takeDamage(5);
	clap.beRepaired(10);
}
