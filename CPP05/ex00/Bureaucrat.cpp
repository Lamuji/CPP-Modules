/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:44:32 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/27 17:23:02 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150){
	std::cout<<"Default ctor called\n";
}

Bureaucrat::~Bureaucrat(){
	std::cout<<"Default dtor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name){
	std::cout<<"Parametric ctor called\n";
	if (grade > 150)
		throw(GradeTooLowException());
	else if (grade < 1)
		throw(GradeTooHighException());
	else
		_grade = grade;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs){
	_grade = rhs._grade;
	return *this;
}

int	Bureaucrat::getGrade() const{
	if (_grade > 150)
		throw(GradeTooLowException());
	else if (_grade < 1)
		throw(GradeTooHighException());
	return _grade;
}

std::string Bureaucrat::getName() const{
	return _name;
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& B){
	return o<<B.getName()<<", bureaucrat grade "<<B.getGrade()<<std::endl;
}

void	Bureaucrat::UpGrade(){
	if (_grade < 1)
		throw(GradeTooHighException());
	else
		_grade--;
}

void	Bureaucrat::DownGrade(){
	if (_grade > 150)
		throw(GradeTooLowException());
	else
		_grade++;
}
