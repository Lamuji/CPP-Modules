/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:01:07 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/04 21:49:38 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void){}
PhoneBook::~PhoneBook(void){}

void	PhoneBook::add(int id)
{
	string firstname;
	string lastname;
	string nickname;
	string number;
	string darksecret;

	cout<<"First name : ";
	cin>>firstname;
	contact[id].setFirstName(firstname);

	cout<<"Last name : ";
	cin>>lastname;
	contact[id].setLastName(lastname);

	cout<<"Nickname : ";
	cin>>nickname;
	contact[id].setNickName(nickname);

	cout<<"Number : ";
	cin>>number;
	contact[id].setNumber(number);

	cout<<"Dark secret : ";
	cin>>darksecret;
	contact[id].setDarkSecret(darksecret);

	cout<<"[New contact saved.]"<<endl<<endl;
}

void	PhoneBook::search(int id)
{
	int i = 0;
	int	num;
	while (i < id)
	{
		cout<<setfill(' ')<<setw(10)<<i<<"|";
		cout<<setfill(' ')<<setw(10)<<contact[i].getFirstName()<<"|";
		cout<<setfill(' ')<<setw(10)<<contact[i].getLastName()<<"|";
		cout<<setfill(' ')<<setw(10)<<contact[i].getNickName()<<"|"<<endl;
		i++;
	}
	cout<<"[Which contact do you want to get infos ?]"<<endl<<"[Please enter its ID.]"<<endl<<endl;
	if(!(cin>>num))
		return ;
	if (num >= 0 && num < id){
		cout<<contact[num].getFirstName()<<endl;
		cout<<contact[num].getLastName()<<endl;
		cout<<contact[num].getNickName()<<endl;
		cout<<contact[num].getNumber()<<endl;
		cout<<contact[num].getDarkSecret()<<endl<<endl;
	}
	else {
		cout<<"Wrong format, or unexistant id"<<endl;
		//PhoneBook::search(id);
	}
}

int	PhoneBook::exit(void)
{
	std::exit(0);
}