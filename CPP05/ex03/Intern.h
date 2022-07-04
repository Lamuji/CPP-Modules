/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:02:07 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/01 16:48:53 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string>
#include "Form.h"

#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"

class Form;

class Intern{
private:
	/* data */
public:
	Intern();
	Intern(const Intern &copy);
	~Intern();

Intern&	operator=(const Intern &rhs);

class FormNotFound : public std::exception {
	public :
	virtual const char* what() const throw(){
			return ("There is no form matching this name\n");
		}
};

Form*	makeForm(std::string s1, std::string s2);
};

#endif