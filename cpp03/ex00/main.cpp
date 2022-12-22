/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:03:01 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 17:05:08 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap cp("alpha");
	ClapTrap cp2("omega");

	cp.attack("omega");
	cp2.takeDamage(cp.getAttack_damage());
	std::cout << cp.getName() << " has " << cp.getHit_points() <<" hp and " << cp.getEnergy_points() << " ep." << std::endl;
	std::cout << cp2.getName() << " has " << cp2.getHit_points() <<" hp and " << cp2.getEnergy_points() << " ep." << std::endl;
	cp2.beRepaired(10);
	std::cout << cp.getName() << " has " << cp.getHit_points() <<" hp and " << cp.getEnergy_points() << " ep." << std::endl;
	std::cout << cp2.getName() << " has " << cp2.getHit_points() <<" hp and " << cp2.getEnergy_points() << " ep." << std::endl;
	return (0);
}