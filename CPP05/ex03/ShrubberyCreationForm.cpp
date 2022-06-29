/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:55:20 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 15:14:35 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"


ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout<<"Shrubbery Form constructor called\n\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137), _target(target)
{
	std::cout<<"Shrubbery Form param constructor called\n\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form("ShrubberyCreationForm", 145, 137)
{
	*this = copy;
	std::cout<<"Shrubbery Form copy constructor called\n\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout<<"Shrubbery Form destructor called\n\n";
}

std::string ShrubberyCreationForm::getTarget() const{
	return _target;
}

int		ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
	if (this->getSigned() == false){
		std::cout<<"Form not signed by "<<_target<<std::endl;
		return 0;
	}
	std::ofstream outfile(_target + "_shrubbery");
	outfile<<"       _-_\n";
	outfile<<"     ~~   ~~\n";
	outfile<<"  ~~         ~~\n";
	outfile<<"{               }\n";
	outfile<<" {  _-     -_  }\n";
	outfile<<"       | | \n";
	outfile<<"       | | \n";
	outfile<<"       | |   \n";
	outfile<<"       ___    \n";
	return 1;
}