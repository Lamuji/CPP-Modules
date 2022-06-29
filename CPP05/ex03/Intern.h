/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:02:07 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 17:27:43 by rfkaier          ###   ########.fr       */
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

Form*	makeForm(std::string s1, std::string s2);
};


#endif