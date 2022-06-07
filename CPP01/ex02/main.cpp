/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:48:20 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/07 14:59:39 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string ="HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	std::cout<<"mem address of string: "<<&string<<std::endl;
	std::cout<<"mem address held by stringPTR: "<<stringPTR<<std::endl;
	std::cout<<"mem address held by stringREF: "<<&stringREF<<std::endl;
	std::cout<<"string = "<<string<<std::endl;
	std::cout<<"stringPTR = "<<*(stringPTR)<<std::endl;
	std::cout<<"stringREF = "<<stringREF<<std::endl;
}