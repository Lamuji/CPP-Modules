/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 02:16:15 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/24 02:24:33 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"

AMateria::AMateria(){
	std::cout<<"AMateria default constructor called\n";
}

AMateria::AMateria(std::string const &type){
	_Type = type;
	std::cout<<"AMateria parametric constructor called\n";
}

AMateria::AMateria(AMateria const &src){
	this = src;
	std::cout<<"AMateria copy constructor called\n";
}

AMateria::~AMateria(){
	std::cout<<"Amateria destructor called\n";
}

AMateria&	AMateria::operator=(AMateria const &rhs){
	_Type = rhs.getType();
	return *this;
}

