/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:06:24 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/17 14:48:33 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	str_toupper(char *str)
{
	while (*str)
	{
		*str = std::toupper(*str);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i] != NULL)
		{
			str_toupper(argv[i]);
			std::cout << argv[i];
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}