/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:55:46 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/19 15:56:06 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <cstring>

static void	ft_do\
(std::ofstream& output, std::string tfind, std::string treplace)
{
	(void)treplace;
	(void)tfind;
	(void)output;
}

int	make_copy_and_replace\
(char *infile, char *outfile, char *tfind, char *treplace)
{
	std::ifstream	inputfile;
	std::ofstream	outputfile;
	std::string		line;

	inputfile.open(infile, std::fstream::in);
	if (inputfile)
	{
		outputfile.open(outfile, std::fstream::out);
		if (!outputfile)
			return (inputfile.close(), outputfile.close(), 0);
		while (!inputfile.eof())
		{
			std::getline(inputfile, line);
			ft_do(outputfile, tfind, treplace);
			if (inputfile.eof())
				break ;
			outputfile << std::endl;
		}
	}
	else
	{
		std::cerr << "Failed to open files!" << std::endl;
		return (inputfile.close(), outputfile.close(), 0);
	}
	inputfile.close();
	outputfile.close();
	return (1);
}

int	main(int argc, char *argv[])
{
	std::string	line;
	char	*outfile;

	if (argc < 3)
	{
		std::cerr	<< "Invalid input : ./sed_is_for_losers filename s1 s2" << std::endl
					<< "\tReplace the string s1 with the string s2 in the filename." << std::endl;
		return (1);
	}
	outfile = strcat(argv[1], ".replace");
	if (!make_copy_and_replace(argv[1], outfile, argv[2], argv[3]))
		return (1);
	return (0);
}