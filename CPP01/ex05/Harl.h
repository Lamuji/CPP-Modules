/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:12:09 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/09 17:09:18 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

class Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();
public:
	Harl();
	~Harl();

	void complain(std::string level);
};

#endif
