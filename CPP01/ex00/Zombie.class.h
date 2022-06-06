/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:05:06 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/06 19:22:27 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class Zombie {
	
private : 

	std::string _name;
	
public :
	Zombie(std::string = "default");
	~Zombie();

	std::string	getName() const;
	Zombie* newZombie(std::string name);
	void	ramdomChump(std:: string name);
	void	announce();
};


#endif