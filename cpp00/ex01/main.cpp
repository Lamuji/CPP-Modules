/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:50:40 by rfkaier           #+#    #+#             */
/*   Updated: 2022/05/31 20:32:49 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(void)
{
	PhoneBook repertoire;

	std::cin >> repertoire.command;
	if (!std::strcmp(repertoire.command, "ADD"))
		repertoire.add();
	else if (!std::strcmp(repertoire.command, "SEARCH"))
		repertoire.search();
	else if (!std)
		
	return 0;
}