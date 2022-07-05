/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:23:32 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/05 13:19:01 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.h"

int main(int ac, char **av){

	if (ac != 2){
		std::cerr<<"Usage : ./progname <arg>\n";
		exit(EXIT_FAILURE);
	}
	else {
		Convert C;
		C.detectType(av[1]);
	}
	return 0;
}