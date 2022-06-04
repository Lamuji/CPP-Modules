/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:28:29 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/04 15:17:27 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

string	Contact::getFirstName(void) const {
	return this->_FirstName;
}

string	Contact::getLastName(void) const {
	return this->_LastName;
}

string	Contact::getNickName(void) const {
	return this->_NickName;
}

string	Contact::getNumber(void) const {
	return this->_Number;
}

string	Contact::getDarkSecret(void) const {
	return this->_DarkSecret;
}

void	Contact::setFirstName(string firstname)
{
	Contact::_FirstName = firstname;
	if (_FirstName.size() > 10){
		_FirstName.resize(10);
		_FirstName[9] = '.';
	}
}

void	Contact::setLastName(string lastname)
{
	Contact::_LastName = lastname;
	if (_LastName.size() > 10){
		_LastName.resize(10);
		_LastName[9] = '.';
	}
}

void	Contact::setNickName(string nickname)
{
	Contact::_NickName = nickname;
	if (_NickName.size() > 10){
		_NickName.resize(10);
		_NickName[9] = '.';
	}
}

void	Contact::setNumber(string number)
{
	Contact::_Number = number;
	if (_Number.size() > 10){
		_Number.resize(10);
		_Number[9] = '.';
	}
}

void	Contact::setDarkSecret(string darksecret)
{
	Contact::_DarkSecret = darksecret;
	if (_DarkSecret.size() > 10){
		_DarkSecret.resize(10);
		_DarkSecret[9] = '.';
	}
}