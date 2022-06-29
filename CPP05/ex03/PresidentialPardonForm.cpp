/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:57:44 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 15:40:23 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.h"


PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	std::cout<<"Pardon Form constructor called\n\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5), _target(target)
{
	std::cout<<"Pardon Form param constructor called\n\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form("PresidentialPardonForm", 25, 5)
{
	*this = copy;
	std::cout<<"Pardon Form copy constructor called\n\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout<<"Pardon Form destructor called\n\n";
}

std::string PresidentialPardonForm::getTarget() const{
	return _target;
}

int		PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
	if (this->getSigned() == false){
		std::cout<<"Form not signed by "<<_target<<std::endl;
		return 0;
	}
	std::cout<<_target<<" has been forgiven by Zaphod Beeblerox\n";
	return 1;
}