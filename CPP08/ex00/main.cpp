/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:57:13 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/13 16:46:41 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main (){
	std::vector<int> test;
	for (int i = 5; i > 0; i--)
		test.push_back(i);

	std::cout << *easyFind(test, 4) << std::endl;

	try{
	std::vector<int>::iterator i =	easyFind(test, 42);
	std::cout << *i << std::endl;
	}
	catch (std::exception &e){
		std::cerr<<e.what() << std::endl;
	}
	return 0;
}
