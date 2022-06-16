/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:32:24 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/16 19:22:12 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
{
	//std::cout<<"Default constructor called\n";
	this->_fixed = 0;
}

Fixed::~Fixed(){
	//std::cout<<"Destructor called\n";
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout<<"Copy constructor called\n";
	*this = src;
}

Fixed::Fixed(int const &n)
{
	//std::cout<<"Int constructor called\n";
	this->_fixed = n << this->_nbbits;
}

Fixed::Fixed(float const &n)
{
	//std::cout<<"Float constructor called\n";
	this->_fixed = roundf(n * (1 << _nbbits));
}

Fixed&	Fixed::operator=(Fixed const & rhs){
	//std::cout<<"Copy assignement operator called\n";
	this->_fixed = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const{
	//std::cout<<"getRawBits member function called\n";
	return _fixed;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

int		Fixed::toInt(void) const
{
	return _fixed>>_nbbits;
}

float	Fixed::toFloat(void) const 
{
	return ((float)_fixed / (1 <<_nbbits));
}

std::ostream &	operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

Fixed& 		Fixed::operator++()
{
	_fixed++;
	return *this;
}

Fixed		Fixed::operator++(int)
{
	Fixed res(*this);
	++*this;
	return res;
}

Fixed&		Fixed::operator--()
{
	this->_fixed--;
	return *this;
}

Fixed		Fixed::operator--(int)
{
	Fixed value(*this);
	--*this;
	return value;
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed res;
	res._fixed = this->_fixed + rhs._fixed;
	return res;
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed res;
	res._fixed = this->_fixed - rhs._fixed;
	return res;
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed res;
	res = (this->toFloat() * rhs.toFloat());
	return res;
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed res;
	res._fixed = this->_fixed / rhs._fixed;
	return res;
}

bool	Fixed::operator==(Fixed const &rhs)
{
	if (_fixed == rhs._fixed)
		return 1;
	else 
		return 0;
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	if (_fixed != rhs._fixed)
		return 1;
	else 
		return 0;
}

bool	Fixed::operator>(Fixed const &rhs)
{
	if (_fixed > rhs._fixed)
		return 1;
	else 
		return 0;
}

bool	Fixed::operator<(Fixed const &rhs)
{
	if (_fixed == rhs._fixed)
		return 1;
	else
		return 0;
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	if (_fixed > rhs._fixed || _fixed == rhs._fixed)
		return 1;
	else 
		return 0;
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	if (_fixed < rhs._fixed || _fixed == rhs._fixed)
		return 1;
	else 
		return 0;
}

Fixed const	Fixed::min(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1.getRawBits() < nb2.getRawBits())
		return nb1;
	else
		return nb2;
}

Fixed	Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1.getRawBits() < nb2.getRawBits())
		return nb1;
	else
		return nb2;
}

Fixed const	Fixed::max(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1.getRawBits() > nb2.getRawBits())
		return nb1;
	else
		return nb2;
}

Fixed	Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1.getRawBits() > nb2.getRawBits())
		return nb1;
	else
		return nb2;
}