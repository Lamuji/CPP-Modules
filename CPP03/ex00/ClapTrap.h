/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:37:02 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/17 18:36:29 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	
private :
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

#endif 