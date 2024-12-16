/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:27:46 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/16 11:23:15 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Contact.hpp"
#include <cctype>
#include <string>

Contact::Contact( void )
{
	return ;
}

Contact::~Contact( void )
{
	return ;
}

std::string	Contact::get_name(int i) const
{
	switch (i)
	{
		case 1:
			return (this->_first_name);
		case 2:
			return (this->_last_name);
		case 3:
			return (this->_nick_name);
	}
	return ("");
}

void	Contact::_set_first_name()
{
	std::string	name;
	while (1)
	{
		std::cout << "Enter a first name (required): ";
		std:std::getline(std::cin, name);
		if (!name.empty())
			break ;
	}
	this->_first_name = name;
}

void	Contact::_set_last_name()
{
	std::string	name;
	while (1)
	{
		std::cout << "Enter a last name (required): ";
		std:std::getline(std::cin, name);
		if (!name.empty())
			break ;
	}
	this->_last_name = name;
}

void	Contact::_set_nick_name()
{
	std::string	name;

	std::cout << "Enter a nick name : ";
	std:std::getline(std::cin, name);
	this->_nick_name = name;
}

static bool	is_all_digit(std::string str)
{
	for (char s : str)
	{
		if (!std::isdigit(s))
			return (false);
	}
	return (true);
}

void	Contact::_set_phone_nbr()
{
	std::string	nbr;
	int			number;
	
	while (1)
	{
		std::cout << "Enter a phone nbr (required): ";
		std:std::getline(std::cin, nbr);
		if (!nbr.empty() && is_all_digit(nbr))
			break ;
	}
	number = std::stoi(nbr);
	this->_phone_nbr = number;
}

void	Contact::_set_dark_secret()
{
	std::string	name;

	std::cout << "Enter a dark secret : ";
	std:std::getline(std::cin, name);
	this->_dark_secret = name;
}

void	Contact::new_contact( void )
{
	this->_set_first_name();
	this->_set_last_name();
	this->_set_nick_name();
	this->_set_phone_nbr();
	this->_set_dark_secret();
}