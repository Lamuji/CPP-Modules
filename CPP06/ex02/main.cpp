/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:25:59 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/10 17:40:45 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.h"

int main(){
	Base *p;

	p = generate();

	identify(p);
	identify(&(*p));
}