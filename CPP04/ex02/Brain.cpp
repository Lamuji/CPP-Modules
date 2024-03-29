/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:46:14 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/23 00:54:34 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.h"

Brain::Brain(){
	std::cout<<"Brain constructor called\n";
}

Brain::~Brain(){
	std::cout<<"Brain destructor called\n";
}

Brain::Brain(const Brain &copy){
	*this = copy;
	std::cout<<"Brain copy constructor called\n";
}

Brain & Brain::operator=(const Brain &rhs){
	for(int i = 0; i <100;i++){
		this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}
