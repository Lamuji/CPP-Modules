/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:57:21 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/13 16:39:56 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class NoOccurenceFound : public std::exception{
	public :
		virtual const char* what() const throw(){
				return ("No occurence found.\n");
			}
};

template<typename T> 
typename T::iterator easyFind(T &integers, int param){
	typename T::iterator it = std::find(integers.begin(), integers.end(), param);
	if (it == integers.end())
		throw(NoOccurenceFound());
	return it;
}

#endif /* ****************************************************** EASYFIND.H_H */