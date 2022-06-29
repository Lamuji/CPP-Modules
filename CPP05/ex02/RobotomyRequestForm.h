/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:34:01 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 15:14:58 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

#include "Form.h"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
private:
 	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	~RobotomyRequestForm();
	//RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs);

	std::string getTarget() const;
	
	int		 execute(Bureaucrat const &executor) const;
};


#endif