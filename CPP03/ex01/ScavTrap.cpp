/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:52:38 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/18 17:25:30 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout<<"Scavtrap Default constructor called\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout<<"ScavTrap Parametrical constructor called\n";
}

ScavTrap::~ScavTrap(){
	std::cout<<"ScavTrap Destructor called\n";
}

ScavTrap::attack()