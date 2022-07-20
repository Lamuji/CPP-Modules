/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:09:48 by ramzi             #+#    #+#             */
/*   Updated: 2022/07/12 20:13:20 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"

template<typename T>
Array<T>::Array() : _size(0){
	_array = NULL;
	std::cout<<"Dfault constructor called.\nEmpty array created.\n";
}

template<typename T>
Array<T>::~Array(){
	delete [] _array;
	std::cout<<"destructor called\n";
}

template<typename T>
Array<T>::Array(unsigned int n): _size(n){
	_array = new T[n];
	for (unsigned int i = 0; i < n; i++){
		_array[i] = 0;
	}
	std::cout<<"Parametric constructor called.\nArray of size "<<n<<" created\n";
}

template<typename T>
Array<T>::Array(const Array &copy){
	_size = copy._size;
	_array = new T[_size];
	for (size_t i = 0; i < copy._size; i++)
		_array[i] = copy._array[i];
	std::cout<<"Copy constructor called\n";
}

template<typename T>
Array<T> const &	Array<T>::operator=(const Array &rhs){
	_size = rhs.size;
	_array = new T[_size];
	for (int i = 0; i < rhs._size; i++)
		_array[i] = rhs._array[i];

	return *this;
}
template<typename T>
T&	Array<T>::operator[](int index){
	if ((size_t)index >= _size || index < 0)
		throw(InvalidIndexException());
	return _array[index];
}

template<typename T>
bool	Array<T>::operator!=(const Array & rhs){
	if (_array != rhs._array)
		return 1;
	else 
		return 0;
}

template<typename T>
size_t	Array<T>::size(){
	return strlen(_array);
}