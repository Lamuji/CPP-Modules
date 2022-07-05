/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:46:26 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/05 14:35:41 by rfkaier          ###   ########.fr       */
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

	Convert& operator=(Convert const &rhs);
	void	detectType(char *str);
	void	convert(int i, char c, float f, double d);
};



#endif