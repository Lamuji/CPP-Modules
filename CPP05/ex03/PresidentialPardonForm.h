/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:38:12 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 15:14:54 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.h"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
private:
 	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	~PresidentialPardonForm();
	//PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);

	std::string getTarget() const;
	
	int		 execute(Bureaucrat const &executor) const;
};

#endif