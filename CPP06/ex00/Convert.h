/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:46:26 by rfkaier           #+#    #+#             */
/*   Updated: 2022/07/04 19:05:39 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string>
#include <limits.h>

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
	void	converter(char *str);
};



#endif