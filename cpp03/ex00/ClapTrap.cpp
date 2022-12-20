/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:05:34 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/20 18:35:50 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap()
{
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std :: cout << "constructeur sans parametre" << std ::endl;
}
ClapTrap :: ClapTrap(std::string name)
{
	this->name = name;
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std :: cout << "constructeur avec parametre" << std ::endl;
}
ClapTrap :: ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	std :: cout << "constructeur de copy" << std ::endl;
}
ClapTrap& ClapTrap ::  operator =(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	return(*this);
}
std::string ClapTrap ::  getName()
{
	return(this->name);
}
int ClapTrap :: getHit_points()
{
	return(this->Hit_points);
}
int ClapTrap :: getEnergy_points()
{
	return(this->Energy_points);
}
int ClapTrap :: getAttack_damage()
{
	return(this->Attack_damage);
}	
void ClapTrap :: setName(std::string name)
{
	this->name = name;
}

ClapTrap :: ~ClapTrap()
{
	std :: cout << "destructeur" << std ::endl;
}
void ClapTrap :: attack(const std::string& target)
{
	if(Energy_points > 0 && Hit_points > 0)
	{
		Energy_points -= 1;
		std::cout << "ClapTrap: " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	}
	else 
		std :: cout << "ni de vie et ni d energie" << std ::endl;
}
void ClapTrap :: takeDamage(unsigned int amount)
{
	if (Hit_points > amount)
		Hit_points = Hit_points - amount;
	else
		Hit_points = 0;
}
void ClapTrap :: beRepaired(unsigned int amount)
{
	if(Energy_points > 0 && Hit_points > 0)
	{
		Hit_points = Hit_points + amount;
		Energy_points -= 1;
	}
	else 
		std :: cout << "ni de vie et ni d energie" << std ::endl;
}