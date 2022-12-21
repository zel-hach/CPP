/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:19:34 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 11:41:32 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB :: HumanB()
{
    
}
HumanB :: HumanB(std :: string name)
{
    this->name = name;
}
HumanB :: HumanB(std :: string name,Weapon *weapon)
{
    this->name = name;
    this->weapon = weapon;
}
void HumanB :: setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
void HumanB :: attack()
{
    if (weapon != nullptr)
        std :: cout << name << " attacks with their " << weapon->getType() << std :: endl;
}
HumanB :: ~HumanB()
{
    std :: cout << "l appel de destructeur" << std::endl;
}