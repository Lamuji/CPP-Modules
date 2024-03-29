/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:23:32 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/08 21:24:45 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.h"

int main(int ac, char **av){

	if (ac != 2){
		std::cerr<<"Usage : ./progname <arg>\n";
		exit(EXIT_FAILURE);
	}
	else {
		try{
			Convert C(av[1]);
		}
		catch (std::exception &e){
			std::cout<<"Exception caught :"<<e.what()<<std::endl;
		}
	}
	return 0;
}