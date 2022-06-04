/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:50:40 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/04 14:52:35 by ramzi            ###   ########.fr       */
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
	int	id = 1;

	while (id < 9)
	{
		cin >> command;
		if (!command.compare("ADD"))
			repertoire.add(id);
		else if (!command.compare("SEARCH"))
			repertoire.search(id);
		else if (!command.compare("EXIT"))
			repertoire.exit();
		id++;
	}
	return 0;
}