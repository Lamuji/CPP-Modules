/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:11:35 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/09 19:53:23 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

uintptr_t serialize(Data* ptr){

	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}
