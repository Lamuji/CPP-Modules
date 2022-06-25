/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:25:04 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/25 15:11:41 by rfkaier          ###   ########.fr       */
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