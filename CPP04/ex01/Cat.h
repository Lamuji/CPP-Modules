/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:25:04 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/22 19:15:33 by ramzi            ###   ########.fr       */
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
	~Cat();
	Cat(Cat const &copy);

	void	makeSound() const;
};

#endif