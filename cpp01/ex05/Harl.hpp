/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:20:31 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 17:45:33 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL__H
#define _HARL__H

#include <iostream>
#include <cstring>

class Harl
{
    void info();
    void debug();
    void warning();
    void error();
    public:
        Harl();
        ~Harl();
        void complain( std::string level);
};


#endif