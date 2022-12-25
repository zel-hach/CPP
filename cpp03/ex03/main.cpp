/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:03:01 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/25 22:35:58 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap  cp("alpha");
	ScavTrap cp2("omega");
	FragTrap cp3("teta");
	DiamondTrap D1("beta");

	// cp.attack("omega");
	// cp2.takeDamage(100);
	// std::cout << cp.getName() << " has " << cp.getHit_points() <<" hit points and " << cp.getEnergy_points() << " ep." << std::endl;
	// std::cout << cp2.getName() << " has " << cp2.getHit_points() <<" hit points  and " << cp2.getEnergy_points() << " ep." << std::endl;
	// cp2.beRepaired(10);
	// std::cout << cp.getName() << " has " << cp.getHit_points() <<" hit points  and " << cp.getEnergy_points() << " ep." << std::endl;
	// std::cout << cp2.getName() << " has " << cp2.getHit_points() <<" hit points  and " << cp2.getEnergy_points() << " ep." << std::endl;
	// std::cout << cp3.getName() << " has " << cp3.getHit_points() <<" hit points  and " << cp3.getEnergy_points() << " ep." << std::endl;
	D1.whoAmI();
	D1.highFivesGuys();
	D1.guardGate();
	D1.attack("omega");
	std::cout <<D1.getName() << " has " << D1.getHit_points() <<" hit points  and  " << D1.getEnergy_points() <<" attack damage " << D1.getAttack_damage() << " ep." << std::endl;
	return (0);
}