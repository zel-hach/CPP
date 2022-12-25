/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:05:34 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/25 22:14:24 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap()
{
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std :: cout << "constructeur sans parametre ClapTrap" << std ::endl;
}

ClapTrap :: ClapTrap(std::string Name)
{
	this->name = Name;
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std :: cout << "constructeur avec parametre ClapTrap" << std ::endl;
}

ClapTrap :: ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->Hit_points = copy.Hit_points;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	std :: cout << "constructeur de copy ClapTrap" << std ::endl;
}

ClapTrap& ClapTrap ::  operator =(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->Hit_points = claptrap.Hit_points;
	this->Energy_points = claptrap.Energy_points;
	this->Attack_damage = claptrap.Attack_damage;
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
void ClapTrap :: setName(std::string Name)
{
	this->name = Name;
}

ClapTrap :: ~ClapTrap()
{
	std :: cout << "destructeur ClapTrap called" << std ::endl;
}
void ClapTrap :: attack(const std::string& target)
{
	if(Energy_points > 0 && Hit_points > 0)
	{
		Energy_points -= 1;
		std::cout << "ClapTrap: " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	}
	else 
		std :: cout << "nor life or energy." << std ::endl;
}
void ClapTrap :: takeDamage(unsigned int amount)
{
	if (Hit_points > (int )amount)
		Hit_points = Hit_points - amount;
	else
		Hit_points = 0;
	std::cout << " he loses " << amount << ",final " << Hit_points << "hit points" << std::endl;
	
}
void ClapTrap :: beRepaired(unsigned int amount)
{
	if(Energy_points > 0 && Hit_points > 0)
	{
		Hit_points = Hit_points + amount;
		Energy_points -= 1;
		std :: cout << "he regains :"  << amount << ",final " << Hit_points << " hit points" << std ::endl;
	}
	else 
		std :: cout << "nor life or energy." << std ::endl;
}