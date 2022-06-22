/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:33:02 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/21 15:22:56 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap: public FragTrap, public ScavTrap
{
private :
	std::string _Name;
public :
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &copy);
	~DiamondTrap();

	DiamondTrap	&	operator=(DiamondTrap const &rhs);
	FragTrap::_HitPoints;
	ScavTrap::_EnergyPoints;
	FragTrap::_AttackDamage;
	void	ScavTrap::attack();
	void			whoAmI();
};

std::ostream &	operator<<(std::ostream &o, DiamondTrap const &rhs);

#endif