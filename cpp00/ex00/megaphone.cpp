/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:48:14 by rfkaier           #+#    #+#             */
/*   Updated: 2022/05/31 12:51:22 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <ctype.h>

int main (int ac, char **av)
{
	int i = 0;
	size_t j;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (av[++i])
	{
		for (j = 0; j<strlen(av[i]); j++)
			std::cout << (char)toupper(av[i][j]);
	}
	std::cout << std::endl;
	return 0;
}
