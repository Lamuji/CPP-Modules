/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:46:17 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/06 14:59:15 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.h"

Convert::Convert(){}

Convert::Convert(Convert const &copy){
	this->_c = copy._c;
	this->_d = copy._d;
	this->_i = copy._i;
	this->_f = copy._f;
}

Convert::Convert(const char* str): _arg(str) {}

Convert::~Convert(){}

Convert&	Convert::operator=(const Convert &rhs){
	this->_c = rhs._c;
	this->_d = rhs._d;
	this->_i = rhs._i;
	this->_f = rhs._f;
	this->_arg = rhs._arg;
	return *this;
}


int Convert::IsIntType() {
    int i = 0;
    while (_arg[i])
    {
        if(i == 0 && (_arg[i] == '-' || _arg[i] == '+'))
            i++;
        if(_arg[i] < 48 || _arg[i] > 57)
            return false;
        i++;
    }
    return true;
}

int Convert::IsFloatType() {
    int i = 0;
    while (_arg[i])
    {
        if(i == 0 && (_arg[i] == '-' || _arg[i] == '+'))
        {
            if(_arg[1] == '.')
                return false;
            i++;
        }
        if((_arg[i] < 48 || _arg[i] > 57) && _arg[i] != '.')
        {
            if(_arg[i] != 'f' && _arg[i + 1] != '\0')
                return false;
        }
        i++;
    }
    if(_arg[0] == '.' || _arg[i - 1] != 'f' || _arg[i - 2] == '.')
        return false;
    return true;
}

int Convert::IsDoubleType() {
    int i = 0;
    while (_arg[i])
    {
        if(i == 0 && (_arg[i] == '-' || _arg[i] == '+'))
            i++;
        if((_arg[i] < 48 || _arg[i] > 57) && _arg[i] != '.')
            return false;
        i++;
    }
    if(_arg[0] == '.' || _arg[i - 1] == '.')
        return false;
    return true;
}

int Convert::IsCharType() {
    if(_arg[0] != '\0' && _arg[1] == '\0')
        return true;
    return false;
}