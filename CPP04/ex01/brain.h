/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:48:53 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/22 19:09:41 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain {

private :
	std::string _ideas[100];
public :
	Brain();
	Brain(const Brain &copy);
	~Brain();
std::string	getIdeas();
Brain &	operator=(const Brain &rhs);

};

#endif