/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:18:37 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 20:47:07 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z1;
    z1.announce();
    Zombie zi("zineb");
    zi.announce();
    Zombie *zl = new Zombie("sahar");
    zl->announce();
    Zombie *z;
    z = zombieHorde(15, "zineb");
    // z->announce();
    delete zl;
    delete[] z;
    return (0);
}