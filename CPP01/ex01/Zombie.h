/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:10:36 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/07 01:47:29 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class	Zombie {
private:
	std::string _name;
public:
	Zombie(std::string name = "default");
	~Zombie();

	void announce();
	void setName(std::string _name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif 