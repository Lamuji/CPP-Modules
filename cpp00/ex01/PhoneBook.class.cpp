/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:01:07 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/04 15:02:10 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void){}
PhoneBook::~PhoneBook(void){}

void	PhoneBook::add(int id)
{
	string firstname;
	string lastname;
	string nickname;
	string number;
	string darksecret;

	cout << "To add a new contact ->" << endl;
	cout << "First name : ";
	cin >> firstname;
	contact[id].setFirstName(firstname);

	cout << "Last name : ";
	cin >> lastname;
	//cout << endl;
	contact[id].setLastName(lastname);

	cout << "Nickname : ";
	cin >> nickname;
	//cout << endl;
	contact[id].setNickName(nickname);

	cout << "Number : ";
	cin >> number;
	//cout << endl;
	contact[id].setNumber(number);

	cout << "Dark secret : ";
	cin >> darksecret;
	//cout << endl;
	contact[id].setDarkSecret(darksecret);

}

void	PhoneBook::search(int id){
	int i = 0;
	while (i++ < id){
		cout << contact[i].getFirstName();
		cout << "|" << endl;
		cout << contact[i].getLastName();
		cout << "|" << endl;
		cout << contact[i].getNickName();
		cout << "|" << endl;
		cout << contact[i].getNumber();
		cout << "|" << endl;
		cout << contact[i].getDarkSecret();
	}

}

int	PhoneBook::exit(void)
{
	std::exit(0);
}