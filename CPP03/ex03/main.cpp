/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:43:47 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/20 19:04:20 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "DiamondTrap.h"

int main()
{
    ClapTrap        bob;
	ClapTrap        tod(bob);
	bob.attack("a skinhead named tod");
	tod.takeDamage(5);
	tod.beRepaired(10);
	std::cout << std::endl;

	ScavTrap        tag("TAG");
	ScavTrap        paf("PAF");
	ScavTrap		ted;
	ted = tag;
	tag.attack("an Arch Guardian");
	paf.guardGate();
	tag.takeDamage(5);
	tag.beRepaired(10);

	for(int i = 0;i<51;i++){
		ted.attack("PAF");
		paf.takeDamage(20);
	}

	FragTrap Mag;
	FragTrap Ram("Ram");
	FragTrap Mal(Mag);

	std::cout << std::endl;
	
	DiamondTrap jojo;

	return 0;
}