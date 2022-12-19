/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:17:51 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 17:39:05 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z;
    z.announce();
    Zombie zi("zineb");
    zi.announce();
    Zombie *zl = new Zombie("test");
    zl->announce();
    newZombie( "llll")->announce();
    randomChump("ggkjfhgdddf");
    delete zl;
    delete newZombie( "llll");
    return (0);
}