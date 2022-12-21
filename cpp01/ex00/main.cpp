/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:17:51 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 11:39:19 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z;
    z.announce();
    Zombie zi("zineb");
    zi.announce();
    Zombie *zl = new Zombie("sahar");
    zl->announce();
    newZombie( "zineb")->announce();
    randomChump("zombie1");
    Zombie *z1;
    z1 = newZombie( "zombie2");
    delete zl;
    delete z1;
    return (0);
}