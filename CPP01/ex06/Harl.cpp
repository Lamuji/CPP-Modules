/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:04:42 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/09 19:03:48 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl()
{
	std::cout<<"Constructor called\n";
}

Harl::~Harl()
{
	std::cout<<"Harl is destroyed\n";
}

void	Harl::debug()
{
	std::cout<<"DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout<<"INFO : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning()
{
	std::cout<<"WARNING : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error()
{
	std::cout<<"ERROR : This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	void	(Harl::*f[])() = {&Harl::debug, &Harl::info,&Harl::warning, &Harl::error};
	std::string curlevel[] = {"debug","info","warning","error"};
	int i;

	for(i = 0;i < 4;i++) {
		if (level == curlevel[i]) {
			break ;
		}
	}

	switch(i) {
		
		case 0 :
			while(i < 4) { 
				(this->*f[i])();
				i++;
			}
			return;
		case 1 :
			while(i < 4) { 
				(this->*f[i])();
				i++;
			}
			return;
		case 2 :
			while(i < 4) {
				(this->*f[i])();
				i++;
			}
			return;
		case 3 :
			while(i < 4) {
				(this->*f[i])();
				i++;
			}
			return;
	}
	std::cout<<"Nothing to say."<<std::endl;
}