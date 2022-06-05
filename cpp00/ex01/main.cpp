/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:50:40 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/05 19:11:12 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(void)
{
	PhoneBook repertoire;
	string command;
	int	id = 0;
	std::cout<<"------//PHONEBOOK//------"<<endl;
	while (1)
	{
		std::cout<<endl<<"[Type command 'ADD' to add new contact]"<<endl;
		std::cout<<"[Type command 'SEARCH' to display contact list]"<<endl;
		std::cout<<"[Type command 'EXIT' to quit Phonebook]"<<endl;
		std::cin>>command;
		std::cin.ignore();
		if (!command.compare("ADD")){
			repertoire.add(id);
			id++;
		}
		else if (!command.compare("SEARCH")) {
			if (id == 0)
				std::cout<<"Phonebook is empty"<<endl;
			else
				repertoire.search(id);
		}
		else if (!command.compare("EXIT"))
			repertoire.exit();
		else
			std::cout<<"Command not valid"<<endl;
	}
	return 0;
}