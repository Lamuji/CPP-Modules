/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:02:49 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/25 15:27:46 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main()
{
	Animal *Animals[10];
	for(int i = 0;i<10;i++){
		if (i > 4)
			Animals[i] = new Cat();
		else
			Animals[i] = new Dog();
	}
	for (int j = 0;j<10;j++)
		delete Animals[j];
	
	Animal	*Anim[3];

	Anim[0] = new Cat();
	Anim[0]->makeSound();
	std::cout<<Anim[0]->getType()<<std::endl;
	std::cout<<std::endl;

	Anim[1] = new Dog();
	Anim[1]->makeSound();
	std::cout<<Anim[1]->getType()<<std::endl;
	std::cout<<std::endl;

	Anim[2] = new Animal();
	Anim[2]->makeSound();
	std::cout<<Anim[2]->getType()<<std::endl;

	for (int j = 0;j<3;j++)
		delete Anim[j];

	Cat	ok;
	Animal *A = new Cat(ok);
	A->makeSound();
	std::cout<<std::endl;

	delete A;
	return 0;
}
