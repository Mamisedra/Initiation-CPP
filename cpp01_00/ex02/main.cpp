/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:44:42 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 12:23:34 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void )
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout	<< "Memory address stringVAL	: " << &string << std::endl
				<< "Memory address stringPTR	: " << stringPTR << std::endl
				<< "Memory address stringREF	: " << &stringREF << std::endl;
	std::cout	<< "Value stringVAL	: " << string << std::endl
				<< "Value stringPTR	: " << *stringPTR << std::endl
				<< "Value stringREF	: " << stringREF << std::endl;
	return (0);
}