/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:59:52 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/25 17:13:05 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main(){
	try{
		Bureaucrat B("B1", 0);
		B.UpGrade();
		std::cout<<B<<"grade is "<<B.getGrade()<<std::endl;
		
		Bureaucrat C;
	}
	catch(std::exception &e)
	{
		std::cerr<<"exception caught : "<<e.what()<<std::endl;
	}
	
	return 0;
	
}