/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:19:46 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 12:26:34 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}
{
    Weapon club = Weapon("crude spiked club");
    Weapon club1 = Weapon("crude spiked club1");
    HumanB jim("Jim");
    jim.setWeapon(club1);
    jim.attack();
    jim.setWeapon(club);
    club.setType("some other type of club");
    jim.attack();
}
return 0;
}