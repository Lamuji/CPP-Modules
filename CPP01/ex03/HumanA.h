/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:42:58 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/07 19:20:44 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.h"

class HumanA
{
private:
	std::string _name;
	Weapon& _weap;
public:
	HumanA(std::string name, Weapon &weap);
	~HumanA();
	//Weapon&	getWeap(void) const;
	void	attack();
};

#endif