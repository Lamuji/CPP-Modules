/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:32:14 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/16 16:17:41 by ramzi            ###   ########.fr       */
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
	Fixed(int const &nb); // constructeur convertisseur int 
	Fixed(float const &nb); // constructeur convertisseur float
	~Fixed(); // destructeur

	Fixed & 	operator=(Fixed const &rhs); // overload operator assignement
	bool	 	operator>(Fixed const &rhs);
	bool	 	operator<(Fixed const &rhs);
	bool		operator>=(Fixed const &rhs);
	bool		operator<=(Fixed const &rhs);
	bool	 	operator==(Fixed const &rhs);
	bool	 	operator!=(Fixed const &rhs);
	Fixed	 	operator+(Fixed const &rhs);
	Fixed 	 	operator-(Fixed const &rhs);
	Fixed 	 	operator*(Fixed const &rhs);
	Fixed 		operator/(Fixed const &rhs);
	Fixed &		operator++();
	Fixed &		operator--();
	Fixed 		operator++(int);
	Fixed 		operator--(int);
	static const Fixed	min(Fixed const &nb1, Fixed const &nb2);
	static Fixed	min(Fixed &nb1, Fixed &nb2);
	static const Fixed	max(Fixed const &nb1, Fixed const &nb2);
	static Fixed 	max(Fixed &nb1, Fixed &nb2);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
};

std::ostream &	operator<<(std::ostream &o, Fixed const & rhs);

#endif