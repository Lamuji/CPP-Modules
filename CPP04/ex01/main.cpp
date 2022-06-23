/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:02:49 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/23 02:00:32 by ramzi            ###   ########.fr       */
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
	
	std::cout<<"---------- 0leaks w/ default constructor----------\n";
	
	Animal	*Anim[3];
	Anim[0] = new Cat();
	Anim[0]->makeSound();
	std::cout<<std::endl;
	Anim[1] = new Dog();
	Anim[1]->makeSound();
	std::cout<<std::endl;
	Anim[1]->makeSound();
	Anim[2] = new Animal();
	Anim[2]->makeSound();
	Anim[2] = Anim[1];
	std::cout<<Anim[2]->getType()<<std::endl;
	Anim[2]->makeSound();
	for (int j = 0;j<2;j++)
		delete Anim[j];
return 0;
}
