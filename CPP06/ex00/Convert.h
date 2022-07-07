/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:46:26 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/06 14:58:20 by ramzi            ###   ########.fr       */
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
	std::string _arg;
public:
	Convert();
	~Convert();
	Convert(Convert const &copy);
	Convert(const char* str);

	Convert& operator=(Convert const &rhs);
	
	int IsIntType();
	int IsFloatType();
	int IsCharType();
	int IsDoubleType();
};



#endif