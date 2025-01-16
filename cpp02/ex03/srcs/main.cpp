/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:00:16 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/16 12:23:04 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int	main( void )
{
	bool		result;
	Point const	a(4,1);
	Point const	b(2,3);
	Point const	c(8,3);
	Point const	p(5,1);

	result = bsp(a, b, c, p);
	if (result)
		std::cout << "BSP : TRUE" << std::endl;
	else
		std::cout << "BSP : FALSE" << std::endl;
	return (0);
}
