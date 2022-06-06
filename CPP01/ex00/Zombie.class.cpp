/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:14:58 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/06 19:20:26 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.h"

Zombie::Zombie(std::string name) : _name(name){
	std::cout<<"Parametrical Constructor called\n";
}

Zombie::~Zombie(void){std::cout<<_name<<" : is destroyed\n";}

std::string Zombie::getName(void) const {
	return this->_name;
}

void	Zombie::announce(void){
	std::cout<<_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
