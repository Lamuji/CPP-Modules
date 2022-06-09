/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:07:53 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/09 18:29:38 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl karen;
		karen.complain(av[1]);
	}
	else
		std::cout<<"Usage: ./progname <arg>"<<std::endl;
	return 0;
}