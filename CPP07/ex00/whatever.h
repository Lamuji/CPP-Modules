/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:59:54 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/11 14:27:08 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>
#include <iomanip>
#include <string>

template<typename T>
void	swap(T &x, T &y ){
	T z = x;
	x = y;
	y = z;
}

template<typename T>
T min(T const &x, T const &y){
	if (x < y)
		return x;
	else 
		return y;
}

template<typename T>
T max(T const &x, T const &y){
	if (x > y)
		return x;
	else
		return y;
}

#endif