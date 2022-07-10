/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:14:22 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/09 19:21:21 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

#include <iomanip>
#include <iostream>

struct Data
{
	int a;
	std::string str;
	float f;
	double d;
};
	uintptr_t	serialize(Data *ptr);
	Data 		*deserialize(uintptr_t raw);

#endif 