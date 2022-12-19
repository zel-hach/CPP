/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:19:31 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 14:22:24 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA__HPP
#define _HUMANA__HPP
#include <iostream>
#include"Weapon.hpp"

class HumanA
{
    Weapon &weapon;
    std :: string name;
    public :
        HumanA(std::string, Weapon&);
        void attack();
        ~HumanA();
};



#endif