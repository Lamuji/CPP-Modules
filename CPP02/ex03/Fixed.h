/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:32:14 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/14 20:12:10 by rfkaier          ###   ########.fr       */
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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
};

std::ostream &	operator<<(std::ostream &o, Fixed const & rhs);

#endif