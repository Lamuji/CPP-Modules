/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:57:11 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/04 14:48:43 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"
#include <string>

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