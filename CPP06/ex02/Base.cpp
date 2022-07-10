/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:27:24 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/10 17:53:37 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.h"

Base *generate(){
	srand(time(0));
	int random = rand() % 3;

	switch (random){
		case 0:
		{
			Base *instanceA = new A();
			return dynamic_cast<Base*>(instanceA);
		}
		case 1:
		{
			Base *instanceB = new B();
			return dynamic_cast<Base*>(instanceB);
		}
		case 2:
		{
			Base *instanceC = new C();
			return dynamic_cast<Base*>(instanceC);
		}
	}
	return NULL;
}
void identify(Base *p){
	if (dynamic_cast<A*>(p))
		std::cout<<"real type of p is A\n";
	else if (dynamic_cast<B*>(p))
		std::cout<<"real type of p is B\n";
	else if (dynamic_cast<C*>(p))
		std::cout<<"real type of p is C\n";
}

void identify(Base &p){
	identify(&p);
}