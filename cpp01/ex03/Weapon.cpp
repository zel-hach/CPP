/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:19:58 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 21:02:03 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon :: Weapon()
{
}
Weapon :: Weapon(std::string type)
{
    this->type = type;
}
const std::string& Weapon :: getType()
{
    return(this->type);
}
void Weapon :: setType(std ::string type)
{
    this->type = type;
}

Weapon :: ~Weapon()
{
    std :: cout << "l appel de destructeur" << std::endl;
}