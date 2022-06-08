/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:44:34 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/08 11:47:20 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weap) : _name(name), _weap(weap) {}

HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	std::cout<<_name<<" attacks with "<<_weap.getType()<<std::endl;
}
