/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:06:24 by mranaivo          #+#    #+#             */
/*   Updated: 2024/11/08 13:48:48 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int		i = 0;
	int		j;
	char	c;

	if (argc >= 2)
	{
		while (++i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 122)
					c = argv[i][j] - 32;
				else
					c = argv[i][j];
				std::cout << c;
				j++;
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}