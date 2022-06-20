/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:37:02 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/20 09:41:48 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	
protected :
	std::string _Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;

public :

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();

ClapTrap & operator=(ClapTrap const &rhs);

std::string	getName() const;
int			getHitPoints() const;
int			getEnergyPoints() const;
int			getAttackDamage() const;

void		setName(std::string name);
void		setHitPoints(int hitpoints);
void		setEnergyPoints(int energypoints);
void		setAttackDamage(int attackdamage);

void		attack(const std::string & target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amount);

};

std::ostream &	operator<<(std::ostream &o, ClapTrap const & rhs);

#endif 