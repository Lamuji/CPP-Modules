/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:05:06 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/07 14:35:29 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

private : 
	std::string _name;
public :
	Zombie(std::string = "default");
	~Zombie();

	void	announce();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif