/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:27:46 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/19 09:47:22 by mranaivo         ###   ########.fr       */
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

std::string	Contact::getPhone_nbr() const
{
	return (this->_phone_nbr);
}

std::string	Contact::getDark_secret() const
{
	return (this->_dark_secret);
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
		std::getline(std::cin, name);
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
		std::getline(std::cin, name);
		if (!name.empty())
			break ;
	}
	this->_last_name = name;
}

void	Contact::_set_nick_name()
{
	std::string	name;

	std::cout << "Enter a nick name : ";
	std::getline(std::cin, name);
	this->_nick_name = name;
}

static bool	is_all_digit(std::string str)
{
	for (int i = 0; (size_t)i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	} 
	return (true);
}

void	Contact::_set_phone_nbr()
{
	std::string	nbr;
	
	while (1)
	{
		std::cout << "Enter a phone nbr (required): ";
		std::getline(std::cin, nbr);
		if (!nbr.empty() && is_all_digit(nbr))
			break ;
	}
	this->_phone_nbr = nbr;
}

void	Contact::_set_dark_secret()
{
	std::string	name;

	std::cout << "Enter a dark secret : ";
	std::getline(std::cin, name);
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
