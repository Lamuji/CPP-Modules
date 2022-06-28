/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:59:52 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/27 20:34:53 by rfkaier          ###   ########.fr       */
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
	std::cout<<"\n \n \n";
	try{
		Form F, F1("F1", 10, 10);
		Bureaucrat B, B1("B1", 15);
		B.signForm(F1);
		for(int i = 0;i<140;i++)
			B.UpGrade();
		B.signForm(F1);
	}
	catch(std::exception &e){
		std::cerr<<"exception caught : "<<e.what()<<std::endl;
	}	
	return 0;
	
}