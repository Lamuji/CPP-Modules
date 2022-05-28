/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:12:56 by rfkaier           #+#    #+#             */
/*   Updated: 2022/05/27 18:57:44 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "constructeur called" << std::endl;
	std::cout << "a1 = " << this->a1 << std::endl;
	std::cout << "a2 = " << this->a2 << std::endl;
	std::cout << "a3 = " << this->a3 << std::endl;

	return; // pas oblige
}

Sample::~Sample(void)
{
	std::cout << "destructeur called" << std::endl;
	return;
}

void	Sample::yo(void)
{
	this->foo = 41;
	std::cout << "foo vaut ici :" << this->foo << std::endl;
	std::cout << "puis," << std::endl;
}
