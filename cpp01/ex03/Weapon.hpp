/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:20:01 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 21:02:07 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON__HPP
#define _WEAPON__HPP
#include <iostream>

class Weapon
{
    std :: string type;
    public:
    Weapon();
    Weapon(std::string);
    const std ::string& getType();
    void setType(std ::string);
    ~Weapon();
};

#endif