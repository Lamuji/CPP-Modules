/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:02:56 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/22 18:20:53 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected :
	std::string _type;

public :

	Animal();
	virtual ~Animal();
	Animal(Animal const &copy);
const	std::string	getType() const;
	
	Animal & operator=(const Animal & rhs);

	virtual void	makeSound() const;
};

#endif

