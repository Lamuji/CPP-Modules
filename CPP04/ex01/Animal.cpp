/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:28:12 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/21 17:11:17 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() : _type("Animal"){
	std::cout<<"Animal Defaut constructor called\n";
}

Animal::~Animal(){
	std::cout<<"Animal class destroyed\n";
}

Animal::Animal(Animal const &copy){
	_type =copy.getType();
	std::cout<<"Animal copy constructor called\n";
}

Animal &	Animal::operator=(Animal const &rhs){
	if (this == &rhs)
        return *this;
	_type = rhs._type;
	return *this;
}

const std::string	Animal::getType() const{
	return _type;
}

void	Animal::makeSound() const{
	std::cout<<"Animals make quite differents sounds\n";
}