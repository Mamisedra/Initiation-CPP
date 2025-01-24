/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:24:50 by mranaivo          #+#    #+#             */
/*   Updated: 2025/01/24 13:22:41 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "header.hpp"

int	main( void )
{
	const Cat	cat = Cat();
	const Cat*	minou = new Cat();
	const Dog	dog = Dog();
	const Dog*	roxy = new Dog();

	cat.makeSound();
	roxy->getType();
	dog.makeSound();
	minou->getType();

	delete minou;
	delete roxy;

	return (0);
}
