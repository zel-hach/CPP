/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:20:44 by zel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 18:03:01 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl :: Harl()
{
    std :: cout << "constructeur is created" << std ::endl;
}
void Harl :: info(void)
{
    std :: cout << "[INFO] " << std :: endl;
    std :: cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std ::endl;
}
void Harl :: debug(void)
{
    std :: cout << "[DEBUG] " << std :: endl;
    std :: cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std ::endl;
}   
void Harl :: warning(void )
{
    std :: cout << "[WARNING] " << std :: endl;
    std :: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std ::endl;
}
void Harl :: error(void )
{
    std :: cout << "[ERROR] " << std :: endl;
    std :: cout <<"This is unacceptable ! I want to speak to the manager now." << std ::endl;
}
void Harl :: complain( std::string level)
{
    std ::string str[] ={"DEBUG","INFO","WARNING","ERROR"};
    int choix;
    int i;
    for(i = 0; i < 5; i++)
    {
        if (level == str[i])
            choix = i;
    }
    switch (choix)
    {
        case 0:
            debug();
         case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            std :: cout << "[Probably complaining about insignificant problems]" << std ::endl;
    }
}
Harl :: ~Harl()
{
    std :: cout << "Appel de destructeur" << std :: endl;
}