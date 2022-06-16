/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:46:51 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/16 19:25:19 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(){
	std::cout<<"default constructor called\n";
}

ClapTrap::~ClapTrap(){
	std::cout<<"destructor called\n";
}

ClapTrap::ClapTrap(std::string name){
	std::cout<<"Parametrical constructor called\n";
	_name = name;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 10;
}

std::string	ClapTrap::getName() const{
	return _Name;
}

int			ClapTrap::getHitPoints() const {
	return _HitPoints;
}

int			ClapTrap::getEnergyPoints() const {
	return _EnergyPoints;
}

int			ClapTrap::getAttackDamage() const {
	return _AttackDamage;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_AttackDamage = rhs.getAttackDamage;
	this->_EnergyPoints = rhs.getEnergiePoints;
	this->_HitPoints = rhs.getHitPoints;
	this->_Name = rhs.getName;
	return *this;
}

