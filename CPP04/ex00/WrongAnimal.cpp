/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:15:20 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/21 18:15:20 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout<<"WrongAnimal Defaut constructor called\n";
}

WrongAnimal::~WrongAnimal(){
	std::cout<<"WrongAnimal class destroyed\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy){
	_type =copy.getType();
	std::cout<<"WrongAnimal copy constructor called\n";
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const &rhs){
	if (this == &rhs)
        return *this;
	_type = rhs._type;
	return *this;
}

const std::string	WrongAnimal::getType() const{
	return _type;
}

void	WrongAnimal::makeSound() const{
	std::cout<<"WrongAnimals make quite differents sounds\n";
}