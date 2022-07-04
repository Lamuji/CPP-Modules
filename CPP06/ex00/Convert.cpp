/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:46:17 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/04 19:23:01 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.h"

Convert::Convert(){}

Convert::Convert(Convert const &copy){
	this->_c = copy._c;
	this->_d = copy._d;
	this->_i = copy._i;
	this->_f = copy._f;
	this->_arg = copy._arg;
}

Convert::~Convert(){}

Convert&	Convert::operator=(const Convert &rhs){
	this->_c = rhs._c;
	this->_d = rhs._d;
	this->_i = rhs._i;
	this->_f = rhs._f;
	this->_arg = rhs._arg;
	return *this;
}

void	Convert::converter(char *str){
	
	for (int i = 0; i < strlen(str); i++){
		if (!isdigit(str[i]))
			break;
	}
	
}