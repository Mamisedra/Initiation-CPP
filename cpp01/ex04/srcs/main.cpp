/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:55:46 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/19 14:10:54 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <cstring>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

char	*file_cat_replace(char* str)
{
	return (strcat(str, ".replace"));
}

static std::string	line_replace(std::string line, std::string to_find, std::string to_replace)
{
	std::string	nline;
	size_t		pos;
	size_t		found;

	nline = "";
	pos = 0;
	while (pos < line.length())
	{
		found = line.find(to_find, pos);
		if (found == std::string::npos)
		{
			nline += line.substr(pos);
			break ;
		}
		nline += line.substr(0, found - pos);
		nline += to_replace;
		pos = found + to_find.length();
	}
	return (nline);
}

int	main(int argc, char *argv[])
{
	std::string	line;
	std::string	to_find;
	std::string	to_replace;

	if (argc < 3)
	{
		std::cerr	<< "Invalid input : ./sed_is_for_losers filename s1 s2" << std::endl
					<< "\tReplace the string s1 with the string s2 in the filename." << std::endl;
		return (1);
	}
	to_find = argv[2];
	to_replace = argv[3];
    std::ifstream sfile(argv[1], std::ios::in);
	if (sfile.is_open())
	{
		std::ofstream file(file_cat_replace(argv[1]), std::ios::out);
		while (!sfile.eof())
		{
			std::getline(sfile, line);
			file << line_replace(line, to_find, to_replace);
			if (!sfile.eof())
				file << std::endl;
		}
		sfile.close();
		file.close();
	}
	else
	{
		std::cout << "Unable to open "<< argv[1] << "." << std::endl;
	}
	return (0);
}