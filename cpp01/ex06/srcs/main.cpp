/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:59:28 by mranaivo          #+#    #+#             */
/*   Updated: 2025/02/18 13:01:02 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "Wrong argument" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
