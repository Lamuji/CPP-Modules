/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:49:00 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/23 01:51:00 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : Animal::Animal(){
	_type = "Dog";
	_B = new Brain();
	std::cout<<"Dog Defaut constructor called\n";
}

Dog::~Dog(){
	delete _B;
	std::cout<<"Dog class destroyed\n";
}

Dog::Dog(Dog const &copy){
	_B = new Brain();
	_type = copy._type;
	std::cout<<"Dog copy constructor called\n";
}

void	Dog::makeSound() const {
	std::cout<<"Animal "<<_type<<" is WafWafing\n";
}

Dog &	Dog::operator=(const Dog &dog){
	if (this == &dog)
		return *this;
	_B = dog._B;
	_type = dog._type;
	return *this;
}