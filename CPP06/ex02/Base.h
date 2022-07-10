/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:50:13 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/10 17:38:51 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <iostream>

class Base
{
public:
	
	virtual ~Base(){};
};

class A: public Base{

};

class B: public Base{

};

class C: public Base{

};

Base *generate();
void identify(Base *p);
void identify(Base &p);

#endif