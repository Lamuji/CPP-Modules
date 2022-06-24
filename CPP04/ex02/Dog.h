/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:22:35 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/23 01:49:55 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "brain.h"

class Dog : public Animal
{
private :
	Brain *_B;
public :

	Dog();
	~Dog();
	Dog(Dog const &copy);

Dog &	operator=(const Dog &dog);
	void	makeSound() const;
};

#endif