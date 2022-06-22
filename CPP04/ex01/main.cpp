/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:02:49 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/22 19:44:55 by ramzi            ###   ########.fr       */
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
		Animals[i] = new Dog();
	}
return 0;
}