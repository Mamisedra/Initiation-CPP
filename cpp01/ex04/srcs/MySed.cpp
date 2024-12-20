/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:49:26 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/20 16:24:10 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MySed.hpp"
#include <string>

void	ft_close( std::ifstream& input, std::ofstream& output)
{
	input.close();
	output.close();
}

MySed::MySed( std::string argv2, std::string argv3 )\
: _line(""), _tofind(argv2), _toreplace(argv3)
{
	return ;
}

MySed::~MySed( void )
{
	return ;
}

void	MySed::setline( std::string line)
{
	this->_line = line;
}

void	MySed::replace( void )
{
	std::string	new_line = _line;
	size_t			pos = 0;

	pos = _line.find(_tofind);
	while (pos != std::string::npos)
	{
		new_line = new_line.substr(0, pos) + _toreplace + new_line.substr(pos + _tofind.length());
		pos = new_line.find(_tofind, pos + _toreplace.length());
	}
	this->setline(new_line);
}

void	MySed::rewrite( std::ofstream& file )
{
	file << _line;
}
