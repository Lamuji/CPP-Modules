/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:37:56 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/07 19:32:26 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.h"

class HumanB
{
private:
	std::string _name;
	Weapon *_weap;
public:
	HumanB(std::string name);
	~HumanB();
	void setWeap(Weapon &weap);
	void	attack();
};

#endif