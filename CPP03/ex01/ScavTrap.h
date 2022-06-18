/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:47:44 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/18 17:17:23 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
private :
	std::string _Name;
public :
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();

ScavTrap &	operator=(ScavTrap const &rhs);
	
	
};



#endif