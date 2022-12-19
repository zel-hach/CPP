/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:18:45 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 17:41:16 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}
Zombie::Zombie(std ::string name)
{
    this->name = name;
}
void Zombie:: setName(std::string name)
{
    this->name = name;
}
std::string Zombie:: getName() const
{
    return(this->name);
}
void Zombie :: announce( void )
{
    setName(name);
    std :: cout << getName() << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}
Zombie::~Zombie()
{
     std :: cout << "appel destructeur" << std :: endl;
}