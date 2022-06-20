/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:03:50 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/20 19:03:27 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap(){
	std::cout<<"Diamond default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name){
	std::cout<<"Diamond "<<name<<" parametrical constructor called\n";
}

DiamondTrap::~DiamondTrap(){
	std::cout<<"DiamondTrap destructor called\n";
}