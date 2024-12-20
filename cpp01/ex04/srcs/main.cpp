/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:55:46 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/20 16:40:51 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MySed.hpp"
#include <fstream>

static void	ft_do\
(MySed *mysed, char *argv1, char *name)
{
	std::ifstream	inputfile;
	std::ofstream	outputfile;
	std::string		line;

	(void)name;
	inputfile.open(argv1, std::ios::in);
	if (inputfile.is_open())
	{
		outputfile.open("replace", std::ios::out);
		if (outputfile.is_open())
		{
			std::getline(inputfile, line, '\0');
			mysed->setline(line);
			mysed->replace();
			mysed->rewrite(outputfile);
		}
		outputfile.close();
	}
	inputfile.close();
}

int	main(int argc, char *argv[])
{
	MySed	*mysed;
	char	*name;

	if (argc < 3)
	{
		std::cerr	<< "Invalid input : ./sed_is_for_losers filename s1 s2" << std::endl
					<< "\tReplace the string s1 with the string s2 in the filename." << std::endl;
		return (1);
	}
	name = strcat(argv[1], ".replace");
	mysed = new MySed(argv[2], argv[3]);
	ft_do(mysed, argv[1], name);
	delete mysed;
	return (0);
}
