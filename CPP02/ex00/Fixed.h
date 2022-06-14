/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:06:02 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/14 18:20:17 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int	_fixed;
	static const int _nbbits = 8;
public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();

	Fixed & operator=(Fixed const &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif