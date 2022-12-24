/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:20:57 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/24 21:17:48 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap :: DiamondTrap()
{
	Hit_points = FragTrap ::Hit_points;
	Energy_points = ScavTrap ::Energy_points;
	Attack_damage = FragTrap ::Attack_damage;
}
DiamondTrap :: DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	Hit_points = FragTrap ::Hit_points;
	Energy_points = ScavTrap ::Energy_points;
	Attack_damage = FragTrap ::Attack_damage;
}
DiamondTrap :: DiamondTrap(const DiamondTrap &copy)
{
	name = copy.name;
	Hit_points = copy.Hit_points;
	Energy_points = copy.Energy_points;
	Attack_damage = copy.Attack_damage;
}
DiamondTrap DiamondTrap :: operator=(const DiamondTrap &a)
{
	name = a.name;
	Hit_points = a.Hit_points;
	Energy_points = a.Energy_points;
	Attack_damage = a.Attack_damage;
	return(*this);
}

std::string DiamondTrap :: getName() const
{
	return(this->name);
}
void DiamondTrap :: setName(std::string name)
{
	this->name = name;
}
void DiamondTrap :: whoAmI()
{
	std :: cout << "le nom de DiamondTrap : " << name  << " le nom de son objet " << ClapTrap::name << std::endl;
}
DiamondTrap :: ~DiamondTrap()
{
	
}