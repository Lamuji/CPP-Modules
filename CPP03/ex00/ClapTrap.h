/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:37:02 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/16 19:25:24 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	
private :
	std::string _Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage

public :

	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();

ClapTrap & operator=(ClapTrap const &rhs);

std::string	getName() const;
int			getHitPoints() const;
int			getEnergiePoints() const;
int			getAttackDamage() const;

void		setName(std::string name);
void		setHitPoints(int hitpoints);
void		setEnergypoints(int energypoints);
void		setAttackDamage(int attackdamage);

void		attack(const std::string & target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amount);
}

#endif 