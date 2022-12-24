/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:45:48 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 20:57:49 by zel-hach         ###   ########.fr       */
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
void ScavTrap :: guardGate()
{
	std :: cout << " ScavTrap est entré en mode Gate keeper" << std::endl;
}
ScavTrap :: ~ScavTrap()
{
	std :: cout << "destructeur ScavTrap" << std ::endl;
}