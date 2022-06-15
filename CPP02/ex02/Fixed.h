/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:32:14 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/15 17:47:10 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_fixed;
	static const int _nbbits = 8;
public:
	Fixed(); // default constructeur
	Fixed(Fixed const &src); // constructeur de copie
	Fixed(int const nb); // constructeur convertisseur int 
	Fixed(float const nb); // constructeur convertisseur float
	~Fixed(); // destructeur

	Fixed & operator=(Fixed const &rhs); // oveload operator assignement
	Fixed & operator>(Fixed const &rhs);
	Fixed & operator<(Fixed const &rhs);
	Fixed & operator>=(Fixed const &rhs);
	Fixed & operator<=(Fixed const &rhs);
	Fixed & operator==(Fixed const &rhs);
	Fixed & operator!=(Fixed const &rhs);
	Fixed & operator+(Fixed const &rhs);
	Fixed & operator-(Fixed const &rhs);
	Fixed & operator*(Fixed const &rhs);
	Fixed & operator/(Fixed const &rhs);
	int operator++();
	int operator--();
	int operator++(int);
	int operator--(int);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
};

std::ostream &	operator<<(std::ostream &o, Fixed const & rhs);

#endif