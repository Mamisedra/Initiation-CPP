/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:55:46 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 14:05:39 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc < 3)
	{
		std::cerr	<< "Invalid input : ./sed_is_for_losers filename s1 s2" << std::endl
					<< "\tReplace the string s1 with the string s2 in the filename." << std::endl;
		return (1);
	}
	
	return (0);
}