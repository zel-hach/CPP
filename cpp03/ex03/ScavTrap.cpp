/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:45:48 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/25 22:39:23 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap :: ScavTrap()
{
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std :: cout << "constructeur sans parametre ScavTrap" << std ::endl;
}
ScavTrap :: ScavTrap(std::string name)
{
	this->name = name;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std :: cout << "constructeur avec parametre ScavTrap" << std ::endl;
}
ScavTrap :: ScavTrap(const ScavTrap& copy)
{
	this->name = copy.name;
	this->Hit_points = copy.Hit_points;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	std :: cout << "constructeur de copy ScavTrap" << std ::endl;
}
ScavTrap ScavTrap :: operator=(const ScavTrap& c)
{
	this->name = c.name;
	this->Hit_points = c.Hit_points;
	this->Energy_points = c.Energy_points;
	this->Attack_damage = c.Attack_damage;
	return(*this);
}
void ScavTrap :: attack(const std::string& target)
{
	if(Energy_points > 0 && Hit_points > 0)
	{
		Energy_points -= 1;
		std::cout << "ScavTrap: " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	}
	else 
		std :: cout << "ni de vie et ni d energie" << std ::endl;
}
void ScavTrap :: guardGate()
{
	std :: cout << "ScavTrap est entré en mode Gate keeper" << std::endl;
}
ScavTrap :: ~ScavTrap()
{
	std :: cout << "destructeur ScavTrap" << std ::endl;
}