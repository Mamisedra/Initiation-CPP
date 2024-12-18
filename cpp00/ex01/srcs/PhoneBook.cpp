/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:24:44 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/17 15:47:47 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <exception>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>

int PhoneBook::_index = 0;
int PhoneBook::_print = 0;

static bool	is_all_digit(std::string str)
{
	for (char s : str)
	{
		if (!std::isdigit(s))
			return (false);
	}
	return (true);
}

PhoneBook::PhoneBook( void )
{
	this->_index = 0;
	this->_print = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	return ;
}
static void	line_none(int i)
{
	if (i == 1)
	{
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICK NAME|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
	else
		std::cout << "+----------+----------+----------+----------+" << std::endl;
}

std::string	PhoneBook::print_trucated(std::string name) const
{
	std::string	new_name;

	if (name.length() > 10)
	{
		new_name = name.substr(0, 9) + ".";
		return (new_name);
	}
	return (name);
}

void	PhoneBook::_show_contact(int index) const
{
	if (index == -1)
	{
		line_none(1);
		for (int i = 0; i < this->_print; i++)
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			std::cout << std::setw(10) << this->print_trucated(this->_contact[i].get_name(1)) << "|";
			std::cout << std::setw(10) << this->print_trucated(this->_contact[i].get_name(2)) << "|";
			std::cout << std::setw(10) << this->print_trucated(this->_contact[i].get_name(3)) << "|";
			std::cout << std::endl;
			line_none(0);
		}
	}
	else
	{
		line_none(1);
		std::cout << "|" << std::setw(10) << index  << "|";
		std::cout << std::setw(10) << this->print_trucated(this->_contact[index - 1].get_name(1)) << "|";
		std::cout << std::setw(10) << this->print_trucated(this->_contact[index - 1].get_name(2)) << "|";
		std::cout << std::setw(10) << this->print_trucated(this->_contact[index - 1].get_name(3)) << "|";
		std::cout << std::endl;
		line_none(0);
	}
}

int	get_index(std::string input)
{
	int	index;

	index = 0;
	for (char c : input)
	{
		if (index > 8)
			return (-1);
		index *= 10;
		index += c - '0';
	}
	return (index);
}

void	PhoneBook::search_contact( void ) const
{
	int			index;
	std::string	input;
	bool		test;

	index = 0;
	test = false;
	this->_show_contact(-1);
	std::cout << "Enter an integer between 1 and 8: ";
	while (1)
	{
		if (test)
		{
			std::cout << "\033[3;31m Error \033[0m" <<"Input must be an ";
			std::cout << "integer between 1 and 8."<< std::endl;
			std::cout << "Please verify your input : ";
		}
		test = true ;
		std::getline(std::cin, input);
		if (!input.empty() && is_all_digit(input))
			index = get_index(input);
		if (index >= 1 && index <= 8)
		{
			if (index > this->_index)
			{
				std::cout << "      \033[1,37m   INDEX "<< index <<" IS NOTHING \033[0m" <<std::endl;
				line_none(0);
			}
			else
				this->_show_contact(index);
			return ;
		}
	}
}

void	PhoneBook::add_contact()
{
	if (this->_index == 8)
		this->_index = 0;
	this->_contact[this->_index].new_contact();
	this->_index++;
	if (this->_print < 8)
		this->_print++;
}