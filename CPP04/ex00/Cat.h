/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:25:04 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/23 01:44:11 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal
{
public :

	Cat();
	~Cat();
	Cat(Cat const &copy);

Cat &	operator=(const Cat &cat);

	void	makeSound() const;
};

#endif