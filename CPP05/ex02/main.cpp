/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:59:52 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 15:39:27 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Form.h"

int main(){
	try{
		ShrubberyCreationForm S("mago");
		Bureaucrat B("ramzi", 137);
		B.signForm(S);
		B.executeForm(S);
	}
	catch (std::exception &e){
		std::cerr<<"exception caught : "<<e.what()<<std::endl;
	}

	try{
		RobotomyRequestForm R("CELL");
		Bureaucrat B("Ramzi", 45);
		B.signForm(R);
		B.executeForm(R);
	}
	catch(std::exception &e){
		std::cerr<<"exception caught : "<<e.what()<<std::endl;
	}
	try{
		PresidentialPardonForm P("100EURO");
		Bureaucrat B("Ramzi", 1);
		B.signForm(P);
		B.executeForm(P);
	}
	catch(std::exception &e){
		std::cerr<<"exception caught : "<<e.what()<<std::endl;
	}
	return 0;
}
