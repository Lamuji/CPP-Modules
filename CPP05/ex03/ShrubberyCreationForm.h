/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:22:07 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 15:17:41 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

#include "Form.h"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
private:
 	std::string _target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	~ShrubberyCreationForm();
	//ShrubberyCreationForm& operator=(ShrubberyCreationForm const &rhs);

	std::string getTarget() const;
	
	int		 execute(Bureaucrat const &executor) const;
};

#endif