/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:52:38 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/20 10:35:06 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout<<"Scavtrap Default constructor called\n";
	_AttackDamage = 20;
	_HitPoints = 100;
	_EnergyPoints = 50;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout<<"ScavTrap Parametrical constructor called\n";
	_AttackDamage = 20;
	_HitPoints = 100;
	_EnergyPoints = 50;
}

ScavTrap::ScavTrap(ScavTrap const &Scavtrap)
{
	_AttackDamage = Scavtrap._AttackDamage;
	_EnergyPoints = Scavtrap._EnergyPoints;
	_HitPoints = Scavtrap._HitPoints;
	_Name = Scavtrap._Name;
	std::cout<<"copy constructor of SCAVTRAP called\n";
}

ScavTrap::~ScavTrap(){
	std::cout<<"ScavTrap Destructor called\n";
}

void	ScavTrap::attack(const std::string &target){
	if (_EnergyPoints <= 0 || _HitPoints <= 0) {
		std::cout<<"No stamina or hp left\n";
		return ;
	}
	_EnergyPoints--;
	std::cout<<_EnergyPoints<<std::endl;
	std::cout<<"ScavTrap "<<this->_Name<<" attacks "<<target<<" causing "<<this->_AttackDamage<<" damages!\n";
}

void	ScavTrap::guardGate(void) {
	std::cout<<_Name<<" is on Gate Keeper mode\n";
}

ScavTrap &	ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_AttackDamage = rhs.getAttackDamage();
	this->_EnergyPoints = rhs.getEnergyPoints();
	this->_HitPoints = rhs.getHitPoints();
	this->_Name = rhs.getName();
	return *this;
}

std::ostream &	operator<<(std::ostream &o, ScavTrap const & rhs){
	return o << rhs.getName();
}