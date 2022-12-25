/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:20:57 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/25 22:15:39 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap :: DiamondTrap()
{
	Hit_points = FragTrap().getHit_points();
	Energy_points = ScavTrap().getEnergy_points();
	Attack_damage = FragTrap().getAttack_damage();
	std :: cout << "constructeur sans parametre DiamondTrap" << std ::endl;
}
DiamondTrap :: DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	Hit_points = FragTrap(name).getHit_points();
	Energy_points = ScavTrap(name).getEnergy_points();
	Attack_damage = FragTrap(name).getAttack_damage();
	std :: cout << "constructeur avec parametre DiamondTrap" << std ::endl;
}
DiamondTrap :: DiamondTrap(const DiamondTrap &copy)
{
	name = copy.name;
	Hit_points = copy.Hit_points;
	Energy_points = copy.Energy_points;
	Attack_damage = copy.Attack_damage;
	std :: cout << "constructeur de copy DiamondTrap" << std ::endl;
}
DiamondTrap DiamondTrap :: operator=(const DiamondTrap &a)
{
	name = a.name;
	Hit_points = a.Hit_points;
	Energy_points = a.Energy_points;
	Attack_damage = a.Attack_damage;
	return(*this);
}

void DiamondTrap :: attack(const std::string &target)
{
	ScavTrap::attack(target);
}

std::string DiamondTrap :: getName() const
{
	return(this->name);
}
void DiamondTrap :: setName(std::string Name)
{
	this->name = Name;
}
void DiamondTrap :: whoAmI()
{
	std :: cout << "le nom de DiamondTrap : " << name  << " le nom de son objet " << ClapTrap::name << std::endl;
}
DiamondTrap :: ~DiamondTrap()
{
	std :: cout << "destructe DiamondTrap" << std ::endl;
}