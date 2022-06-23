/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:38:15 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/23 01:51:03 by ramzi            ###   ########.fr       */
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
	_B = new Brain();
	std::cout<<"Cat copy constructor called\n";
}

Cat &	Cat::operator=(const Cat &cat){
	if (this == &cat)
		return *this;
	_B = cat._B;
	_type = cat._type;
	return *this;
}

void	Cat::makeSound() const {
	std::cout<<"Animal "<<_type<<" is Meowmeowing\n";
}
