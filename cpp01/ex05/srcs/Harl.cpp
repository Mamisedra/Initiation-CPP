/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:57:12 by mranaivo          #+#    #+#             */
/*   Updated: 2025/02/18 16:00:44 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <string>

Harl::Harl( void )
{
	return;
}

Harl::~Harl (void )
{
	return;
 }

void	Harl::debug( void )
{
	std::cout << " DEBUG : " <<
		"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		 << std::endl;
}

void	Harl::info( void )
{
	std::cout << " INFO : " <<
	"I cannot believe adding extra bacon costs more money. You didn’t put" <<
	" enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << " WARNING : " <<
	"I think I deserve to have some extra bacon for free. I’ve been coming for "
	<< "years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error( void )
{
	std::cout << " ERROR : " <<
	"This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain( std::string level )
{
	void (Harl::*arrayFunction[])
	()={
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string	arrayLevel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == arrayLevel[i])
		{
			(this->*arrayFunction[i])();
			return ;
		}
	}
}
