/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:59:52 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/29 12:20:07 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main(){
	try{
		Bureaucrat B("B1", 1), C, D("B2", 140);
		B.DownGrade();
		std::cout<<B;
		std::cout<<C;
		std::cout<<D<<std::endl;

		for(int i = 0;i<10;i++){
			D.DownGrade();
			std::cout<<D;
		}
	}
	catch(std::exception &e) {
		std::cerr<<"exception caught : "<<e.what()<<std::endl;
	}
	
	
	return 0;
	
}