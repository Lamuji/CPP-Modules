/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:15:32 by rfkaier           #+#    #+#             */
/*   Updated: 2022/06/20 11:23:14 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
	public :
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &copy);
	~FragTrap();
	
	void	highFivesGuys();
};

std::ostream &	operator<<(std::ostream &o, FragTrap const &rhs);