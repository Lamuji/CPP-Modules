/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:01:49 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/01 16:49:30 by ramzi            ###   ########.fr       */
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

Form*	Intern::makeForm(std::string s1, std::string s2){

	std::string form[3] = {"robotomy request","presidential pardon","shrubbery creation"};
	int i;
	for (i = 0; i < 3; i++){
		if (!s1.compare(form[i]))
			break;
	}
	switch (i)
	{
	case 0:
		std::cout<<"Intern creates "<<s2<<std::endl;
		return new RobotomyRequestForm(s2);
	case 1:
		std::cout<<"Intern creates "<<s2<<std::endl;
		return new PresidentialPardonForm(s2);
	case 2:
		std::cout<<"Intern creates "<<s2<<std::endl;
		return new ShrubberyCreationForm(s2);
	default:
		throw(FormNotFound());
	}
}
