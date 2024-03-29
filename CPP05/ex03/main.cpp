/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:59:52 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/01 16:55:18 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"
#include "Form.h"

int main()
{
	try{
		Intern someRandomIntern;
		Form* rrf = someRandomIntern.makeForm("presidential", "tender");
		std::cout<<*rrf;
		delete rrf;
	}
	catch (std::exception &e){
		std::cerr<<"exception caught : "<<e.what()<<std::endl;
	}
}
