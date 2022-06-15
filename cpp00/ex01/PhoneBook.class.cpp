/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:01:07 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/15 19:16:51 by rfkaier          ###   ########.fr       */
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

	// if (id == 8)
	// 	id = 0;
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
	string firstname[8];
	string lastname[8];
	string nickname[8];
	while (i < id)
	{
		firstname[i] = contact[i].getFirstName();
		lastname[i] = contact[i].getLastName();
		nickname[i] = contact[i].getNickName();
		i++;
	}
	i = 0;
	while (i < id)
	{
		if (id >= 8)
			id = 8;
		if (firstname[i].size() > 10){
			firstname[i].resize(9);
			firstname[i].push_back('.');
			}
		if (lastname[i].size() > 10){
			lastname[i].resize(9);
			lastname[i].push_back('.');
			}
		if (nickname[i].size() > 10){
			nickname[i].resize(9);
			nickname[i].push_back('.');
			}
		std::cout<<setfill(' ')<<setw(10)<<i<<"|";
		std::cout<<setfill(' ')<<setw(10)<<firstname[i]<<"|";
		std::cout<<setfill(' ')<<setw(10)<<lastname[i]<<"|";
		std::cout<<setfill(' ')<<setw(10)<<nickname[i]<<"|"<<endl;
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