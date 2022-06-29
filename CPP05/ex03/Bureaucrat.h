/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:30:18 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 15:03:42 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include "Form.h"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();

	Bureaucrat&	operator=(const Bureaucrat& rhs);
	int			getGrade()const;
	std::string	getName() const;
	
	void		UpGrade();
	void		DownGrade();
	void		signForm(Form &F) const;
	void		executeForm(Form const &form);

	class GradeTooHighException : public std::exception{
		public :
			virtual const char* what() const throw(){
				return ("Grade too high\n");
			}
	};
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("Grade too low\n");
			}
	};
};

std::ostream& operator<<(std::ostream &o, Bureaucrat const &B);


#endif 