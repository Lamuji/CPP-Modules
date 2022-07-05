/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:46:17 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/05 14:56:40 by rfkaier          ###   ########.fr       */
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

void	Convert::detectType(char *str){
	int dot = 0;
	//int letter = 0;
	int numeric = 0;
	int neg = 0;
	int alpha = 0;
	int f = 0;

	char *pEnd;

	for (size_t i = 0; i <= strlen(str); i++){
		if (str[i] == '.')
			dot = 1;
		if (isnumber(str[i]))
			numeric = 1;
		if (isalpha(str[i]) && i != strlen(str))
			alpha = 1;
		if (i == 0 && str[i] == '-')
			neg = 1;
		if (str[i] == '.')
			dot = 1;
		if (str[strlen(str) - 1] == 'f')
			f = 1;
	}
	if (alpha == 1)
		_c = *str;
	if (dot == 1 && f == 1){
		_f = strtof(str, &pEnd);
		std::cout <<"char : " << static_cast<char>(_f) << std::endl;
		std::cout <<"int : " << static_cast<int>(_f) << std::endl;
		std::cout << std::fixed << std::setprecision(2) <<"double : " << static_cast<double>(_f) << std::endl;
		std::cout << std::fixed << std::setprecision(2) <<"float : "<<  _f << "f" << std::endl;
	}
	else if (dot == 1 && f == 0 && numeric == 1 && alpha == 0){
		_d = strtod(str, &pEnd);
		std::cout <<"char : " << static_cast<char>(_d) << std::endl;
		std::cout <<"int : " << static_cast<int>(_d) << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "double : " << static_cast<double>(_d) << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "float : " << static_cast<float>(_d) << "f" << std::endl;
	}
	else if (dot == 0 && alpha == 0 && f == 0 && numeric == 1){
		_i = atoi(str);
		std::cout <<"char : " << static_cast<char>(_d) << std::endl;
		std::cout <<"int : " << static_cast<int>(_d) << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "double : " << static_cast<double>(_d) << std::endl;
		std::cout << std::fixed << std::setprecision(2) << "float : " << static_cast<float>(_d) << "f" << std::endl;
	}
}