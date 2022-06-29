/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:26:31 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 15:15:50 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.h"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const int		_gradeSign;
	const int		_gradeExec;
	bool _signed;
public:

	Form();
	Form(const Form &copy);
	Form(const std::string name, int gradeSign, int gradeExec);
	~Form();

	Form&	operator=(const Form& rhs);
	int			getGradeSign()const;
	int			getGradeExec() const;
	int			getSigned() const;
	std::string	getName() const;
	void		beSigned(Bureaucrat const &B);

	virtual int execute(Bureaucrat const &executor) const = 0;

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

std::ostream& operator<<(std::ostream &o, Form const &B);

#endif