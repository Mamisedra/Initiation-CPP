/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:36:00 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 10:44:00 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main( void )
{
	const	Animal*	j = new Dog();
	const	Animal*	i = new Cat();
	const	Animal*	biby[100];
	int		a;

	a = 0;
	while (a < 100)
	{
		if (a % 2 != 0)
			biby[a] = new Dog();
		else
			biby[a] = new Cat();
		a ++;
	}
	std::cout << ">=== The machine that kills animals is running ===<" << std::endl;
	a = 0;
	while (a < 100)
	{
		delete biby[a];
		a++;
	}
	delete j;
	delete i;
	return (0);
}
