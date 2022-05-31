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

class Contact {

public:
 Contact(/* args */);
	~Contact();

	char firstName[9];
	char lastName[9];
	char nickName[9];
	char phoneNumber[9];
	char darkestSecret[9];
private:
};

#endif