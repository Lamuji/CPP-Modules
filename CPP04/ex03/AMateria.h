/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzi <ramzi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:24:09 by ramzi             #+#    #+#             */
/*   Updated: 2022/06/24 02:24:27 by ramzi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>

class AMateria
{
protected:
	std::string _Type;
public:
	AMateria();
	AMateria(const AMateria &src);
	AMateria(std::string const & type);
	~AMateria();
	
	AMateria &	operator=(const AMateria &rhs);
	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif