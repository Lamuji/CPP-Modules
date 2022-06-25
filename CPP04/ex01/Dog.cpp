/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:49:00 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/25 15:26:54 by rfkaier          ###   ########.fr       */
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

Dog::Dog(Dog const &copy) : Animal::Animal(){
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
	this->_B = dog._B;
	this->_type = dog._type;
	return *this;
}