/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:46:26 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/08 21:22:31 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string>
#include <limits.h>
#include <iomanip>
#include <math.h>

class Convert
{
private:
	int		_i;
	char	_c;
	double 	_d;
	float 	_f;
	std::string	_arg;
public:
	Convert();
	~Convert();
	Convert(Convert const &copy);
	Convert(char* str);

	Convert& operator=(Convert const &rhs);
	

	bool IsIntType();
	bool IsFloatType();
	bool IsCharType();
	bool IsDoubleType();

	void	convert();

	class NonSenseConvertion : public std::exception {
		public :
		virtual const char* what() const throw(){
			return "Invalid Argument\n";
		}
	};
};



#endif