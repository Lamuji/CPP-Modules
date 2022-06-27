/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:26:25 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/27 20:31:53 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

Form::Form(): _name("Default Form"), _gradeSign(150), _gradeExec(150), _signed(false){
	std::cout<<"Form default ctor called\n";
}

Form::Form(const Form &copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec), _signed(copy._signed){
	std::cout<<"Form copy ctor called\n";
}

Form::~Form(){
	std::cout<<"Form default dtor called\n";
}

Form::Form(const std::string name, int gradeSign, int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false){
	std::cout<<"Form parametric ctor called\n";
	if (_gradeSign < 1 || _gradeExec < 1)
		throw(GradeTooHighException());
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw(GradeTooLowException());
}

Form&	Form::operator=(const Form& rhs){
	_signed = rhs._signed;
	return *this;
}

int	Form::getGradeSign() const{
	if (_gradeSign > 150)
		throw(GradeTooLowException());
	else if (_gradeSign < 1)
		throw(GradeTooHighException());
	return _gradeSign;
}

int	Form::getGradeExec() const{
	if (_gradeExec > 150)
		throw(GradeTooLowException());
	else if (_gradeExec < 1)
		throw(GradeTooHighException());
	return _gradeExec;
}

std::string Form::getName() const{
	return _name;
}

int	Form::getSigned() const{
	return _signed;
}

void	Form::beSigned(Bureaucrat const &B){
	if (B.getGrade() > this->_gradeSign)
		throw(GradeTooLowException());
	else
		_signed = true;
}

std::ostream&	operator<<(std::ostream& o, const Form& F){
	return o<<"Form "<<F.getName()<<std::endl<<"grade needed to sign =" <<F.getGradeSign()<<std::endl<<"grade needed to exec = "<<F.getGradeExec()<<std::endl<<"Signed ? "<<F.getSigned()<<std::endl;
}