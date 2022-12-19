/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:18:10 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 17:20:21 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std :: cout << "constructeur sans parametre" << std :: endl;
}
Zombie::Zombie(std ::string name)
{
    this->name = name;
     std :: cout << "constructeur avec parametre" << std :: endl;
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
    std :: cout << this->name << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}
Zombie::~Zombie()
{
     std :: cout << "appel destructeur de zombie : " << this->name << std :: endl;
}