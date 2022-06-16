/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:28:29 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/15 18:48:03 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iomanip>

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
}

void	Contact::setLastName(string lastname)
{
	Contact::_LastName = lastname;
}

void	Contact::setNickName(string nickname)
{
	Contact::_NickName = nickname;
}

void	Contact::setNumber(string number)
{
	Contact::_Number = number;
}

void	Contact::setDarkSecret(string darksecret)
{
	Contact::_DarkSecret = darksecret;
}
