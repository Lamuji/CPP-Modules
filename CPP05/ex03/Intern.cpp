/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:01:49 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 17:24:26 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy){
	*this = copy;
}


Intern::~Intern(){}

Intern&	Intern::operator=(Intern const &rhs){
	(void)rhs;
	return *this;
}

Form*	makeForm(std::string s1, std::string s2){

	std::string form[] = {"robotomy","presidential","shrubbery"};
	int i;
	for (i = 0; i < 2; i++){
		if (form[i].find(s1))
			break;
	}
	switch (i)
	{
	case 0:
		return new RobotomyRequestForm(s2);
	case 1:
		return new PresidentialPardonForm(s2);
	case 2:
		return new ShrubberyCreationForm(s2);
	default:
		break;
	}
	std::cerr<<"There is no form matches this name\n";
	return NULL;
}
