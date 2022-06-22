/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:12:26 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/21 18:12:26 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected :
	std::string _type;

public :

	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(WrongAnimal const &copy);
const	std::string	getType() const;
	
	WrongAnimal & operator=(const WrongAnimal & rhs);

	void	makeSound() const;
};

#endif
