/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:47:45 by mranaivo          #+#    #+#             */
/*   Updated: 2024/12/20 14:42:29 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MY_SED_H__
# define __MY_SED_H__

#include <fstream>
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

class MySed
{
	public:

		MySed( std::string argv2, std::string argv3 );
		~MySed( void );
		void	replace( void );
		void	setline(std::string line);
		void	rewrite(std::ofstream& file);

	private:
		std::string _line;
		std::string _tofind;
		std::string _toreplace;
};

void	ft_close( std::ifstream& file1, std::ofstream& file2);
#endif
