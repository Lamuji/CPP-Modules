/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:38:22 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/07 00:50:50 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name) : _name(name){
	std::cout<<"Parametrical Constructor called\n";
}

Zombie::~Zombie(void){
	std::cout<<_name<<" : is destroyed\n";
}

void	Zombie::announce(void){
	std::cout<<_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
