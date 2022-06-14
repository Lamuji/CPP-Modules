/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:10:30 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/14 18:28:56 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
{
	std::cout<<"Default constructor called\n";
	this->_fixed = 0;
}

Fixed::~Fixed(){
	std::cout<<"Destructor called\n";
}

Fixed::Fixed(Fixed const & src)
{
	std::cout<<"Copy constructor called\n";
	*this = src;
}

Fixed&	Fixed::operator=(Fixed const & rhs){
	std::cout<<"Copy assignement operator called\n";
	this->_fixed = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const{
	std::cout<<"getRawBits member function called\n";
	return _fixed;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}
