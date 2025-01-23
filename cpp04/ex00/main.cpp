/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:10:11 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/23 16:49:05 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "header.hpp"

int	main( void )
{
	const	Animal* meta = new Animal();
	const	Animal*	j = new Dog();
	const	Animal*	i = new Cat();
	const	WrongAnimal* wa = new WrongAnimal();
	const	WrongAnimal* wc = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wa->makeSound();
	wc->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wa;
	delete wc;

	return (0);
}
