/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:50:46 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 10:52:56 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Brain::Brain( void )
{
	_ideas[0] = "I have 100 free space in my brain";
	std::cout << YELLOW
	 << "Brain constructor Called!!" << CLEAR << std::endl;
	return ;
}

Brain::~Brain( void )
{
	std::cout << YELLOW << "Brain destructor Called!"
		<< CLEAR
		<< std::endl;
	return ;
}

Brain::Brain( const Brain & other )
{
	*this = other;
	std::cout << YELLOW << "Brain copy constructor Called!"
		<< CLEAR
		<< std::endl;
};

Brain&	Brain::operator=( const Brain & other )
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << YELLOW << "Brain assignment operator Used!!" << CLEAR << std::endl;
	return (*this);
}

void	Brain::setBrainContent( int id, std::string content )
{
	if (id <= 0 || id >= 100)
	{
		std::cout << "It's impossible to complete with id <=0 and 100"
			<< std::endl;
		return ;
	}
	_ideas[id] = content;
}
