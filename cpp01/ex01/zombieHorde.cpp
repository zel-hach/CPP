/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:18:52 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 20:47:47 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    char c;
    if (N <= 0)
    {
        std ::cout << "it's a negative number" << std::endl;
        return(0);
    }
    Zombie *zombieH = new Zombie[N];
    i = 0;
    while (i < N)
    { 
        c = i + 48;
        zombieH[i].setName(name + c);
        zombieH[i].announce();
        i++; 
    }
    return (zombieH);
}