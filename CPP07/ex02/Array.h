/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:58:05 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/12 20:09:12 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>

#define MAX_VAL 750

template<typename T>
class Array
{
private:
	T *_array;
	size_t _size;
public:
	Array(); // constructor defaut : cree un array vide.
	Array(unsigned int n); // parametric : creer un array de n element initialise par default.
	Array(const Array &copy);
	~Array(); // destructeur

	Array const&	operator=(Array const &rhs);
	T&	operator[](int);
	bool	operator!=(const Array &rhs);

	T &		getArray() const;
	void  	setArray(T array);

	size_t	size();

	class InvalidIndexException : public std::exception{
		public :
			virtual const char* what() const throw(){
				return ("Invalid index.\n");
			}
	};

};

#endif