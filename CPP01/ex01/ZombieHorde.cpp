/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:46:46 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/07 14:40:19 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	Zomb = new Zombie[N];
	while (N > 0){
		//Zomb[N].setName(name);
		Zomb[N] = Zombie(name);
		//Zomb[N].announce();
		N--;
	}
	return Zomb;
}