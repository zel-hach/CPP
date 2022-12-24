/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:20:54 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/24 21:18:53 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_HPP
#define _DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap ,public FragTrap
{
	std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap&);
		DiamondTrap operator=(const DiamondTrap&);
		void whoAmI();
		std::string getName() const;
		void setName(std::string);
		~DiamondTrap();
};

#endif