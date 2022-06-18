/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:46:51 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/18 15:29:23 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(){
	std::cout<<"default constructor called\n";
}

ClapTrap::~ClapTrap(){
	std::cout<<"destructor called\n";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name): _Name(name){
	std::cout<<"Parametrical constructor called\n";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 10;
}

ClapTrap::ClapTrap(ClapTrap const &ClapTrap)
{
	_AttackDamage = ClapTrap._AttackDamage;
	_EnergyPoints = ClapTrap._EnergyPoints;
	_HitPoints = ClapTrap._HitPoints;
	_Name = ClapTrap._Name;
	std::cout<<"copy constructor called\n";
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

void	ClapTrap::setName(std::string name){
	_Name = name;
}

void	ClapTrap::setHitPoints(int hitpoints){
	_HitPoints = hitpoints;
}

void	ClapTrap::setEnergyPoints(int energypoints){
	_EnergyPoints = energypoints;
}

void	ClapTrap::setAttackDamage(int attackdamage){
	_AttackDamage = attackdamage;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_AttackDamage = rhs.getAttackDamage();
	this->_EnergyPoints = rhs.getEnergyPoints();
	this->_HitPoints = rhs.getHitPoints();
	this->_Name = rhs.getName();
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_EnergyPoints <= 0 || _HitPoints <= 0) {
		std::cout<<"No stamina or hp left\n";
		return ;
	}
	setEnergyPoints(_EnergyPoints - 1);
	std::cout<<"ClapTrap "<<this->_Name<<" attacks "<<target<<" causing "<<this->_AttackDamage<<" damages!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	setHitPoints(_HitPoints - amount);
	std::cout<<"ClapTrap "<<_Name<<" takes "<<amount<<" damages!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	setEnergyPoints(_EnergyPoints - 1);
	std::cout<<_Name<<" heals himself and recovers "<<amount<<" hp\n";
	setHitPoints(_HitPoints + amount);
}
