/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:22:22 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/13 16:29:40 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <string>

int	ft_getcommand()
{
	std::string	command;

	std::cout << "Command : ";
	std::getline(std::cin, command);
	if (command == "SEARCH")
		return (1);
	if (command == "ADD")
		return (2);
	if (command == "EXIT")
		return (3);
	std::cout << "\033[1;31m!! Invalid input !!\033[0m" << std::endl;
	return (0);
}

int	main( void )
{
	PhoneBook	phonebook;
	int			command;

	command = 0;
	std::cout << "Enter an command\033[1;37m {ADD,SEARCH,EXIT} \033[0m" << std::endl;
	while (1)
	{
		command = ft_getcommand();
		if (command == 1)
			phonebook.search_contact();
		else if (command == 2)
			phonebook.add_contact();
		else if (command == 3)
			break ;
	}
	std::cout << "\033[1;32m >>>>>>>>EXIT<<<<<<<<< \033[0m" << std::endl;
	return (0);
}