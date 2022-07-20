/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:33:46 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/12 15:57:07 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

int main(){

	int tab[] = {0,1,2,3};
	char strtab[16] = "Hello universe\n";

	float tabf[] = {1.45,2.67,4.2,10};
	iter<int>(tab, 4, display);
	std::cout<<std::endl;
	iter(strtab, 16,display);
	iter<float>(tabf, 4, display);
	return 0;
}