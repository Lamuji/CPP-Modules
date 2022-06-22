/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:22:35 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/23 01:17:03 by rfkaier          ###   ########.fr       */
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

	void	makeSound() const;
};

#endif