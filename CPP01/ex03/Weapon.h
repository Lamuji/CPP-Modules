/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:05:58 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/07 19:14:25 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>
//#include "HumanB.h"


class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type = "some other type of club");
	~Weapon();
	
	std::string const &	getType(void) const;
	void			setType(std::string type);

};

#endif
