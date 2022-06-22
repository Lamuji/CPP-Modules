/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:38:15 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/22 19:18:07 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() : Animal::Animal(){
	_type = "Cat";
	_B = new Brain();
	std::cout<<"Cat Defaut constructor called\n";
}

Cat::~Cat(){
	delete _B;
	std::cout<<"Cat class destroyed\n";
}

Cat::Cat(Cat const &copy){
	_type = copy._type;
	std::cout<<"Cat copy constructor called\n";
}


void	Cat::makeSound() const {
	std::cout<<"Animal "<<_type<<" is Meowmeowing\n";
}
