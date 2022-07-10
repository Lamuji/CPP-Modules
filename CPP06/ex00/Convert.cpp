/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:46:17 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/08 21:23:03 by ramzi            ###   ########.fr       */
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

Convert::Convert(char* str): _arg(str) {
	std::cout<<"param constructor called\n\n\n";
	this->convert();
}

Convert::~Convert(){
	std::cout<<"\n\n\ndestructor called\n";
}

Convert&	Convert::operator=(const Convert &rhs){
	this->_c = rhs._c;
	this->_d = rhs._d;
	this->_i = rhs._i;
	this->_f = rhs._f;
	this->_arg = rhs._arg;
	return *this;
}

bool Convert::IsIntType() {
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

bool Convert::IsFloatType() {
	int i = 0;
	while (_arg[i])
	{
		if(i == 0 && (_arg[i] == '-' || _arg[i] == '+')){
			if(_arg[1] == '.')
				return false;
			i++;
		}
		if((_arg[i] < 48 || _arg[i] > 57) && _arg[i] != '.'){
			if(_arg[i] != 'f' && _arg[i + 1] != '\0')
				return false;
		}
		i++;
	}
	if(_arg[0] == '.' || _arg[i - 1] != 'f' || _arg[i - 2] == '.')
		return false;
	return true;
}

bool Convert::IsDoubleType() {
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

bool Convert::IsCharType() {
	if(_arg[0] != '\0' && _arg[1] == '\0')
		return true;
	return false;
}

void Convert::convert(){
	if (this->IsCharType()){
		_c = std::stoi(_arg);
		if ((_c >= 0 && _c <= 31) || _arg[0] == '-')
			std::cout<<"char: "<<"Non displayable"<<std::endl;
		else
			std::cout<<"char: "<< static_cast<char>(_c) <<std::endl;
		std::cout<<"int: "<<static_cast<int>(_c)<<std::endl;
		std::cout<<"float: "<<std::fixed << std::setprecision(2)<<static_cast<float>(_c)<<"f"<<std::endl;
		std::cout<<"double: "<<std::fixed << std::setprecision(2)<<static_cast<double>(_c)<<std::endl;
	}
	else if (this->IsIntType()){
		_i = std::stoi(_arg);
		if ((_i >= 0 && _i <= 31) || _arg[0] == '-')
			std::cout<<"char: "<<"Non displayable"<<std::endl;
		else
			std::cout<<"char: "<< static_cast<char>(_i) <<std::endl;
		std::cout<<"int: "<<_i<<std::endl;
		std::cout<<"float: "<<std::fixed << std::setprecision(2)<<static_cast<float>(_i)<<"f"<<std::endl;
		std::cout<<"double: "<<std::fixed << std::setprecision(2)<<static_cast<double>(_i)<<std::endl;
	}
	else if (this->IsFloatType()){
		_f = std::stof(_arg);
		if ((_f >= 0 && _f <= 31) || _arg[0] == '-')
			std::cout<<"char: "<<"Non displayable"<<std::endl;
		else
			std::cout<<"char: "<< static_cast<char>(_f) <<std::endl;
		std::cout<<"int: "<<static_cast<int>(_f)<<std::endl;
		std::cout<<"float: "<<std::fixed<<std::setprecision(2)<<_f<<"f"<<std::endl;
		std::cout<<"double: "<<std::fixed<<std::setprecision(2)<<static_cast<double>(_f)<<std::endl;
	}
	else if (this->IsDoubleType()){
		_d = std::stod(_arg);
		if ((_d >= 0 && _d <= 31) || _arg[0] == '-')
			std::cout<<"char: "<<"Non displayable"<<std::endl;
		else
			std::cout<<"char: "<< static_cast<char>(_d) <<std::endl;
		std::cout<<"int: "<<static_cast<int>(_d)<<std::endl;
		std::cout<<"float: "<<std::fixed << std::setprecision(2)<<static_cast<float>(_d)<<"f"<<std::endl;
		std::cout<<"double: "<<std::fixed << std::setprecision(2)<<_d<<std::endl;
	}
	else if (_arg == "nan" || _arg == "+inf" || _arg == "-inf"){
		std::cout<<"char: Impossible"<<std::endl;
		std::cout<<"int: Impossible"<<std::endl;
		std::cout<<"float: "<<_arg<<"f"<<std::endl;
		std::cout<<"double: "<<_arg<<std::endl;
	}
	else if (_arg == "nanf" || _arg == "+inff" || _arg == "-inff"){
		std::cout<<"char: Impossible"<<std::endl;
		std::cout<<"int: Impossible"<<std::endl;
		std::cout<<"float: "<<_arg<<std::endl;
		_arg.erase(_arg.end() - 1);
		std::cout<<"double: "<<_arg<<std::endl;
	}
	else
		throw(NonSenseConvertion());
}