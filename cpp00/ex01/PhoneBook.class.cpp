/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:01:07 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/05 19:17:49 by rfkaier          ###   ########.fr       */
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

	if (id == 8)
		id = 0;
	std::cout<<"First name : ";
	getline(std::cin, firstname);
	contact[id].setFirstName(firstname);

	std::cout<<"Last name : ";
	getline(std::cin, lastname);
	contact[id].setLastName(lastname);

	std::cout<<"Nickname : ";
	getline(std::cin, nickname);
	contact[id].setNickName(nickname);

	std::cout<<"Number : ";
	getline(std::cin, number);
	contact[id].setNumber(number);

	std::cout<<"Dark secret : ";
	getline(std::cin, darksecret);
	contact[id].setDarkSecret(darksecret);

	if (firstname.length() == 0 || lastname.length() == 0
		|| nickname.length() == 0 || number.length() == 0 || darksecret.length() == 0) {
		std::cout<<"[A contact's field cannot be empty]"<<endl;
		PhoneBook::add(id);
		}
	else
		std::cout<<"[New contact saved.]"<<endl<<endl;
}

void	PhoneBook::search(int id)
{
	int i = 0;
	int	num;
	while (i < id)
	{
		if (id >= 8)
			break ;
		std::cout<<setfill(' ')<<setw(10)<<i<<"|";
		std::cout<<setfill(' ')<<setw(10)<<contact[i].getFirstName()<<"|";
		std::cout<<setfill(' ')<<setw(10)<<contact[i].getLastName()<<"|";
		std::cout<<setfill(' ')<<setw(10)<<contact[i].getNickName()<<"|"<<endl;
		i++;
	}
	std::cout<<"[Which contact do you want to get infos ?]"<<endl<<"[Please enter its ID.]"<<endl<<endl;
	if(!(std::cin>>num)){
        std::cin.clear();
        std::cin.ignore(100, '\n');
		std::cout<<"[Must be a integer]"<<endl;
		return ;
	}
	if (num >= 0 && num < id){
		std::cout<<contact[num].getFirstName()<<endl;
		std::cout<<contact[num].getLastName()<<endl;
		std::cout<<contact[num].getNickName()<<endl;
		std::cout<<contact[num].getNumber()<<endl;
		std::cout<<contact[num].getDarkSecret()<<endl<<endl;
	}
	else {
		std::cout<<"Wrong format, or unexistant id"<<endl;
		PhoneBook::search(id);
	}
}

int	PhoneBook::exit(void)
{
	std::exit(0);
}