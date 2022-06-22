/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:15:18 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/21 15:20:56 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(): ClapTrap(){
	std::cout<<"FragTrap Default constructor called\n";
	_AttackDamage = 30;
	_HitPoints = 100;
	_EnergyPoints = 100;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout<<"FragTrap Parametrical constructor called\n";
	_AttackDamage = 30;
	_HitPoints = 100;
	_EnergyPoints = 100;
}

FragTrap::FragTrap(FragTrap const & FragTrap)
{
	_AttackDamage = FragTrap._AttackDamage;
	_EnergyPoints = FragTrap._EnergyPoints;
	_HitPoints = FragTrap._HitPoints;
	_Name = FragTrap._Name;
	std::cout<<"copy constructor of FragTrap called\n";
}

FragTrap::~FragTrap(){
	std::cout<<"FragTrap Destructor called\n";
}

void	FragTrap::highFivesGuys(){
	std::cout<<"Fragtrap "<<_Name<<" asks for High Fives\n";
}