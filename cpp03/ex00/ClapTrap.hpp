/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:04:00 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/25 15:59:04 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_H
#define _CLAPTRAP_H
#include <iostream>

class ClapTrap
{
		std::string name;
		int 		Hit_points;
		int 		Energy_points;
		int 		Attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator =(const ClapTrap&);
		void setName(std::string);
		std::string getName();
		int getHit_points();
		int getEnergy_points();
		int getAttack_damage();	
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif