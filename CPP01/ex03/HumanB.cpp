/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:44:37 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/08 11:43:11 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"


HumanB::HumanB(std::string name) : _name(name), _weap(NULL){
}

HumanB::~HumanB(){}

void	HumanB::setWeap(Weapon &weap)
{
	_weap = &weap;
}

void	HumanB::attack(void)
{
	if (!_weap)
		std::cout<<_name<<" has no weapon!"<<std::endl;
	else
		std::cout<<_name<<" attacks with "<<(*_weap).getType()<<std::endl;
}