/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:19:28 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 20:55:59 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(std::string name, Weapon &weapon):weapon(weapon)
{
    this->name = name;
}
void HumanA :: attack()
{ 
    std :: cout << name << " attacks with their " << weapon.getType() << std ::endl;
}
HumanA :: ~HumanA()
{
    std :: cout << "l appel de destructeur" << std::endl;
}