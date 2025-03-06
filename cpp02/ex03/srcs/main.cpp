/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:00:16 by mranaivo          #+#    #+#             */
/*   Updated: 2025/03/06 15:17:13 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int	main( void )
{
	bool		result;
	Point const	a(0,0);
	Point const	b(0,5);
	Point const	c(5,0);
	Point const	p(0,0.1);

	result = bsp(a, b, c, p);
	if (result)
		std::cout << "BSP : TRUE" << std::endl;
	else
		std::cout << "BSP : FALSE" << std::endl;
	return (0);
}
