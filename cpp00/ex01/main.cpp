/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:50:40 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/04 21:01:05 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
using namespace std;

int	main(void)
{
	PhoneBook repertoire;
	string command;
	int	id = 0;
	cout<<"------//PHONEBOOK//------"<<endl;
	cout<<"[Type command 'ADD' to add new contact]"<<endl;
	cout<<"[Type command 'SEARCH' to display contact list]"<<endl;
	cout<<"[Type command 'EXIT' to quit Phonebook]"<<endl;
	while (1)
	{
		cin>>command;
		if (id == 8)
			id--;
		if (!command.compare("ADD")){
			repertoire.add(id);
			id++;
		}
		else if (!command.compare("SEARCH"))
			repertoire.search(id);
		else if (!command.compare("EXIT"))
			repertoire.exit();
	}
	return 0;
}