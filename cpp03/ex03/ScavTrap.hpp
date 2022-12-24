/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:45:16 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/24 21:32:14 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap&);
	ScavTrap operator=(const ScavTrap&);
	~ScavTrap();
	void guardGate();
	protected:
		ScavTrap();
};
#endif