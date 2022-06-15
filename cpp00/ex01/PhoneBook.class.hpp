/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:57:11 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/15 18:26:47 by rfkaier          ###   ########.fr       */
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

	PhoneBook(void);
	~PhoneBook(void);

	void add(int id);
	void search(int id);
	int exit();
private:
	Contact contact[8];
};

#endif