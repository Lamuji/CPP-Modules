/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:57:30 by rfkaier           #+#    #+#             */
/*   Updated: 2022/05/31 16:11:12 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef contact_CLASS_H
# define contact_CLASS_H
#include <string>
#include <iostream>
using	namespace std;

class Contact {

public:
 	Contact();
	~Contact(void);

	string	getLastName(void) const;
	string	getFirstName(void) const;
	string	getNickName(void) const;
	string	getNumber(void) const;
	string	getDarkSecret(void) const;
	void	setLastName(string LastName);
	void	setFirstName(string FirstName);
	void	setNickName(string NickName);
	void	setNumber(string Number);
	void	setDarkSecret(string DarkSecret);

private:
	string _LastName;
	string _FirstName;
	string _NickName;
	string _Number;
	string _DarkSecret;
};

#endif