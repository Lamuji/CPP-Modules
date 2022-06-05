/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:57:11 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/05 19:00:27 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook {

public:
	Contact contact[8];

	PhoneBook(void);
	~PhoneBook(void);

	std::string command[6];

	void add(int id);
	void search(int id);
	int exit();
private:

};

#endif