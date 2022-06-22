/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:15:46 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/21 18:15:46 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal(){
	_type = "WrongCat";
	std::cout<<"Defaut constructor called\n";
}

WrongCat::~WrongCat(){
	std::cout<<"WrongCat class destroyed\n";
}

WrongCat::WrongCat(WrongCat const &copy){
	_type = copy._type;
	std::cout<<"WrongCat copy constructor called\n";
}


void	WrongCat::makeSound() const {
	std::cout<<"Animal "<<_type<<" is Meowmeowing\n";
}
