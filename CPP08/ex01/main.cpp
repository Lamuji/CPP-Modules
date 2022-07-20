/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:41:57 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/19 17:33:58 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main(){
	// try{
	// 	Span S1(10);
	// 	S1.longestSpan();
	// }
	// catch (std::exception &e){
	// 	std::cerr<<e.what();
	// }

	// try{
	// 	Span S2(100);
	// 	srand(time(0));
	// 	// for(int i = 0; i < 101 ; i++)
	// 	// 	S2.addNumber(rand() % 1000);
	// 	S2.addNumber(100);
	// 	S2.addNumber(2);
	// 	S2.addNumber(-1);
	// 	S2.addNumber(1000);
	// 	S2.addNumber(6);
	// 	S2.addNumber(45);
	// 	S2.addNumber(5);
	// 	std::cout << S2.longestSpan() <<std::endl;
	// 	std::cout << S2.shortestSpan() <<std::endl;
	// }
	// catch (std::exception &e){
	// 	std::cerr<<e.what();
	// }


	Span sp = Span(500);
	std::vector<int> nb(67);
	srand(time(NULL));
	std::generate(nb.begin(), nb.end(), rand);
	sp.addByRange(nb.begin(), nb.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
