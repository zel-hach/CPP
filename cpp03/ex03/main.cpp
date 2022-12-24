/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:03:01 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/24 21:15:53 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	// ScavTrap  cp("alpha");
	// ScavTrap cp2("omega");
	DiamondTrap D1("ddddd");

	// cp.attack("omega");
	// cp2.takeDamage(cp.getAttack_damage());
	// std::cout << cp.getName() << " has " << cp.getHit_points() <<" hp and " << cp.getEnergy_points() << " ep." << std::endl;
	// std::cout << cp2.getName() << " has " << cp2.getHit_points() <<" hp and " << cp2.getEnergy_points() << " ep." << std::endl;
	// cp2.beRepaired(10);
	// std::cout << cp.getName() << " has " << cp.getHit_points() <<" hp and " << cp.getEnergy_points() << " ep." << std::endl;
	// std::cout << cp2.getName() << " has " << cp2.getHit_points() <<" hp and " << cp2.getEnergy_points() << " ep." << std::endl;
	D1.whoAmI();
	std::cout <<D1.getName() << " has D " << D1.getHit_points() <<" hp and D" << D1.getEnergy_points() <<" attack damage" << D1.getAttack_damage() << " epD." << std::endl;
	return (0);
}