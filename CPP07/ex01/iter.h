/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:34:12 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/12 15:54:37 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template<typename T>
void	iter(T *address, size_t size, void (*f)(T const &smt)){
	for (size_t i = 0; i < size; i++){
		f(address[i]);
	}
}

template<typename T>
void display(T const &smt){
	std::cout << smt << std::endl;
}

#endif