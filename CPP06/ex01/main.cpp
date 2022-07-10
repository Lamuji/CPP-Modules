/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:53:34 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/09 21:48:12 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

int main(){
	Data *D = new Data();
	Data *D2;
	uintptr_t raw;
	D->a = 42;
	D->d = 42.00;
	D->f = 42.00;
	D->str = "quarante deux";
	std::cout<< D->a<<std::endl;
	std::cout<< D->d<<std::endl;
	std::cout<< D->f<<std::endl;
	std::cout<< D->str<<std::endl<<std::endl;

	std::cout << "serialization...\n\n";
	raw = serialize(D);
	std::cout << "and deserialization...\n\n";
	D2 = deserialize(raw);
	std::cout<< D2->a<<std::endl;
	std::cout<< D2->d<<std::endl;
	std::cout<< D2->f<<std::endl;
	std::cout<< D2->str<<std::endl<<std::endl;
	//D = deserialize(p);
	return 0;
}