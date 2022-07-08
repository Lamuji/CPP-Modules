/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:46:26 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/07 21:07:42 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string>
#include <limits.h>
#include <iomanip>

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

	// void getI(int i) const;
	// void getF(float f) const;
	// void getD(double d) const;
	// void getC(char c) const;
	// int  	setI();
	// float	setF();
	// double	setD();
	// char	setC();

	void	convert();
};



#endif