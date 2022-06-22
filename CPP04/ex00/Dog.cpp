/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:49:00 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/22 18:18:51 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : Animal::Animal(){
	_type = "Dog";
	std::cout<<"Dog Defaut constructor called\n";
}

Dog::~Dog(){
	std::cout<<"Dog class destroyed\n";
}

Dog::Dog(Dog const &copy){
	_type = copy._type;
	std::cout<<"Dog copy constructor called\n";
}

void	Dog::makeSound() const {
	std::cout<<"Animal "<<_type<<" is WafWafing\n";
}