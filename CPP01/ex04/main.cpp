/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:54:30 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/08 19:02:18 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string str;
		std::string str1 = av[2];
		std::string str2 = av[3];
		std::fstream ifs;
		if (!str1.length() || !str2.length()) {
			std::cout<<"Args must exist\n";
			return -1;
		}
		ifs.open(av[1], std::fstream::in);
		if (!ifs){
			std::cout<<"File error\n";
			return -1;
		}
		str.assign((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
		ifs.close();
		int it = str.find(str1);
		while(it > 0)
		{
			str.erase(it, str1.length());
			str.insert(it, str2);
			it = str.find(str1);
		}
		std::ofstream ofs((strcat(av[1],".replace")));
		ofs<<str;
	}
	else
		std::cout<<"The program needs 3 arguments : <Filename>, string s1, string s2\n";
	return 0;
}