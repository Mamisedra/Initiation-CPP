/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:55:46 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/13 11:38:30 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MySed.hpp"
#include <fstream>

static void	ft_do\
(MySed *mysed, char *argv1)
{
	std::ifstream	inputfile;
	std::ofstream	outputfile;
	std::string		line;

	inputfile.open(argv1);

	if (inputfile.is_open())
	{
		strcat(argv1, ".replace");
		outputfile.open(argv1);
		if (outputfile.is_open())
		{
			std::getline(inputfile, line, '\0');
			mysed->setline(line);
			mysed->replace();
			mysed->rewrite(outputfile);
			outputfile.close();
		}
		inputfile.close();
	}
}

int	main(int argc, char *argv[])
{
	MySed	*mysed;

	if (argc < 3)
	{
		std::cerr	<< "Invalid input : ./sed_is_for_losers filename s1 s2" << std::endl
					<< "\tReplace the string s1 with the string s2 in the filename." << std::endl;
		return (1);
	}
	std::cout << "1" << argv[1] << std::endl
		<< "2 - "<< argv[2] << std::endl
		<< "3 - " << argv[3]<< std::endl;
	mysed = new MySed(argv[2], argv[3]);
	ft_do(mysed, argv[1]);
	delete mysed;
	return (0);
}
