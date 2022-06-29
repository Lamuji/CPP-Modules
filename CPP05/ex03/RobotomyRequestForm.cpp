/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:37:26 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 15:36:16 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	std::cout<<"Robotomy Form constructor called\n\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45), _target(target)
{
	std::cout<<"Robotomy Form param constructor called\n\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form("RobotomyRequestForm", 72, 45)
{
	*this = copy;
	std::cout<<"Robotomy Form copy constructor called\n\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout<<"Robotomy Form destructor called\n\n";
}

std::string RobotomyRequestForm::getTarget() const{
	return _target;
}

int		RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
	if (this->getSigned() == false){
		std::cout<<"Form not signed by "<<_target<<std::endl;
		return 0;
	}
	std::cout<<"*drill noise*\n";
	srand(time(0));
	if (rand() % 2 == 1)
		std::cout<<_target<<" has been robotomized with success !\n";
	else
		std::cout<<_target<<"'s robotomization has failed.\n";
	return 1;
}