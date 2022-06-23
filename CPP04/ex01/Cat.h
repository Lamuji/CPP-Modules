/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:25:04 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/23 01:49:39 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "brain.h"

class Cat : public Animal
{
private :
	Brain *_B;
public :

	Cat();
	virtual ~Cat();
	Cat(Cat const &copy);

Cat &	operator=(const Cat &cat);
	void	makeSound() const;
};

#endif