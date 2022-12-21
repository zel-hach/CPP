/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:19:38 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 14:18:30 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB__HPP
#define _HUMANB__HPP
#include <iostream>
#include"Weapon.hpp"

class HumanB
{  
    Weapon *weapon;
    std :: string name;
    public :
        HumanB();
        HumanB(std :: string);
        HumanB(std :: string ,Weapon *);
        void setWeapon(Weapon&);
        void attack();
        ~HumanB();
};


#endif